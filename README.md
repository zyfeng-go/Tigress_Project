## Investigation on Possible Impact from Other Transformations on Virtualize

*Virtualize* is so strong an obfuscation that researchers are eager to explore. In this project, our group would like to know what kind of impact other transformations would potentially add to Virtualization by running various experiments.

*More specifically, We would like to start with simple tigressTest.c file to investigate the potential impact. Noticed that we will keep the "default" configuration for all transformations at the moment.*

### Steps and Explanation

```
1. run the obfuscation on tigressTest.c w/ Virtualize and another transformation at a time.
2. check output a.out to make sure the obfuscated program obtains the same output as 
   the original program. 
3. locate and copy the obfuscated function sum from the obfuscated source code file.
4. use the command diff to compare the obfuscated function sum against the function sum 
   in the baseline.
```

The raw results (output of command diff) of comparisons are saved under [diff_results](https://github.com/zyfeng-go/Tigress_Project/tree/main/diff_results) directory. More detailed information can be found at our [Shared Google Docs](https://docs.google.com/document/d/1Zx8N51Ajv7L5oO82Yq2FWLIXia6XdBfb7kbXWaPedy0/edit?usp=sharing)!

### Baseline Virtualize
*Tigress* virtualizes the function *sum* in *tigressTest.c* with `switch` dispatch method.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --out=baseline.c tigressTest.c
```

### Research on Recipes
#### 1. Recipe #2 Virtualization and Self-Modification

The goal of transformation *Self-Modify* is to make specified functions (e.g. sum) self-modifying. It is especially useful after virtualization with a direct or indirect dispatch because most de-virtualization tools look for indirect branches and these are now gone from the code.

Notice that the generated obfuscated source code should be compiled to run with ` gcc --static -Wl,--omagic source_code_file_name -o executable_file_name ` in Linux.

Compared the function *sum* before and after using transformation *Self-Modify*, we conclude that transformation *Self-Modify* has impact on transformation *Virtualize*. The most intuitive difference is that *Self-Modify* inserts a binary code template into the code.

The running commands are saved in [Recipes/2/run.sh](https://github.com/zyfeng-go/Tigress_Project/tree/main/Recipes/2/run.sh).

#### 2. Recipe #3 Virtualization and Dynamic Obfuscation
In this recipe, *Tigress* first virtualized and then added dynamic obfuscation to the source code. Notice that we got rid of transformation *Measure* because it did not really matter here.

Transformation *JitDynamic* enables the program decode and re-encode itself as it is running. Compared the function *sum* before and after using transformation *JitDynamic*, we conclude that transformation *JitDynamic* has impact on transformation *Virtualize*.

The running commands are saved in [Recipes/3/run.sh](https://github.com/zyfeng-go/Tigress_Project/tree/main/Recipes/3/run.sh).

#### 3. Recipe #4 Merge, Virtualization, and Encode Literals
In order to understand recipe #4, we modified our *tigressTest.c*. We inserted another function *mul* so that transformation *Merge* can be properly adapted.

The running commands are saved in [Recipes/4/run.sh](https://github.com/zyfeng-go/Tigress_Project/tree/main/Recipes/4/run.sh).

#### 4. Observations
In general, we observed that the effect / impact of a transformation is added to the previous results. 

### Virtualize w/ Jit
Include `#include "PATH_TO_TIGRESS/jitter-amd64.c"` to *tigressTest.c*.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=Jit --Functions=sum 
        --out=vir_Jit.c ../tigressTest.c
```

### Virtualize w/ Jit Dynamics
Include `#include "PATH_TO_TIGRESS/jitter-amd64.c"` to *tigressTest.c*.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=JitDynamic --Functions=sum 
        --out=vir_JitDynamic.c ../tigressTest.c
```

### Virtualize w/ Flatten
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=Flatten --Functions=sum 
        --out=vir_flatten.c ../tigressTest.c
```

### Virtualize w/ Split
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=Split --Functions=sum 
        --out=vir_Split.c ../tigressTest.c
```

### Virtualize w/ Merge
Notice that *Merge* requires multiple functions (at least two). It is useful as a precursor to *Virtualize*. For example, if you want to *Virtualize* two functions, first *Merge* them together and then *Virtualize* the result.

However, there are only function *sum* and function *main* (function *main* is not allowed to be involved) in the *tigressTest.c*. How to check *Merge* is TBD...

### Virtualize w/ Add Opaque
```
 tigress --Environment=x86_64:Linux:Gcc:7.5 
         --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
         --Transform=InitOpaque --Functions=sum --InitOpaqueStructs=list 
         --Transform=AddOpaque --Functions=sum --AddOpaqueStructs=list 
         --out=vir_Add_Opaque.c ../tigressTest.c
```

### Virtualize w/ Encode Literals
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=InitOpaque --Functions=sum --InitOpaqueStructs=list 
        --Transform=EncodeLiterals --Functions=sum 
        --out=vir_EncodeLiterals.c ../tigressTest.c
```

### Virtualize w/ Encode Encode Data
The goal is for a variable's real value to never be revealed. Notice that it only supports obfuscating integers, pointers to integers, arrays of integers or combinations of these at the moment. In addition, only *poly1* makes sense.

```
```