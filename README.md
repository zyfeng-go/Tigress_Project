## Investigation on possible impact from other transformations with Virtualize

*Virtualize* is so strong an obfuscation that researchers are eager to explore. In this project, our group would like to know what kind of impact that other transformations would potentially add to Virtualization by running various experiments.

*More specifically, We would like to start with simple tigressTest.c file to investigate the potential impact. Noticed that we keep the default configuration for all transformations at the moment.*

### Steps and Explanation

```
1. run the obfuscation on function sum w/ Virtualize and another transformation.
2. check output a.out to make sure the obfuscated program obtain the same output as 
   the original program. 
3. cut out the function sum from the obfuscated source code file.
4. use the command diff to compare the obfuscated function sum against the function sum 
   in the baseline.
```

The raw results (output of command diff) of comparison are saved under *diff_results* directory. More detailed information can be found at our [Google Docs](https://docs.google.com/document/d/1Zx8N51Ajv7L5oO82Yq2FWLIXia6XdBfb7kbXWaPedy0/edit?usp=sharing)!

### Baseline Virtualize
*Tigress* virtualizes the function *sum* in *tigressTest.c* with `switch` dispatch method.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --out=baseline.c tigressTest.c
```

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

However, there are only function *sum* and function *main* (function *main* is not allowed to be involved) in the *tigressTest.c*. How to check *Merge* is TBD.

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