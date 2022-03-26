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



### Virtualize w/ Jit
The transformation *Jit* turns a function into one that generates its code during runtime. Include `#include "PATH_TO_TIGRESS/jitter-amd64.c"` to *tigressTest.c*.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=Jit --Functions=sum 
        --out=vir_Jit.c ../tigressTest.c
```

### Virtualize w/ Jit Dynamics
The transformation *Jit Dynamics* turns a function into one that continuously transforms itself. Include `#include "PATH_TO_TIGRESS/jitter-amd64.c"` to *tigressTest.c*.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=JitDynamic --Functions=sum 
        --out=vir_JitDynamic.c ../tigressTest.c
```

### Virtualize w/ Flatten
The transformation *Flatten* removes control flow from a function.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=Flatten --Functions=sum 
        --out=vir_flatten.c ../tigressTest.c
```

### Virtualize w/ Split
The transformation *Split* splits a function into smaller parts.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=Split --Functions=sum 
        --out=vir_Split.c ../tigressTest.c
```

### Virtualize w/ Merge
The transformation *Merge* merges multiple functions into one.

```
tigress --Environment=x86_64:Linux:Gcc:7.5 
	 --Transform=Merge 
		--Functions=sum,mul 
		--MergeName=merged 
     --Transform=Virtualize 
        --Functions=merged 
        --VirtualizeDispatch=switch 
    --out=vir_Merge.c tigressTest.c
	  
```

### Virtualize w/ Add Opaque
The transformation *Add Opaque* splits up control flow by adding opaque branches.
```
 tigress --Environment=x86_64:Linux:Gcc:7.5 
         --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
         --Transform=InitOpaque --Functions=sum --InitOpaqueStructs=list 
         --Transform=AddOpaque --Functions=sum --AddOpaqueStructs=list 
         --out=vir_Add_Opaque.c ../tigressTest.c
```

### Virtualize w/ Encode Literals
The transformation *Encode Literals* replaces integer and string literals with less obvious expressions.
```
tigress --Environment=x86_64:Linux:Gcc:7.5 
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=InitOpaque --Functions=sum --InitOpaqueStructs=list 
        --Transform=EncodeLiterals --Functions=sum 
        --out=vir_EncodeLiterals.c ../tigressTest.c
```

### Virtualize w/ Encode Data
The transformation *Encode Data* hides real values of integer variables with non-standard data representation.

❗ ❗ **Transformation *Encode Data* cannot handle local variables properly.** ❗ ❗

Variable x, y, and q or any combinations of them can be encoded through `LocalVariables` option. However, although variable z is also a local variable, *Tigres* returns "*[[Tigress]] <<ERROR: Transformation not possible>> Transformation 'EncodeData': Local variable(s) 'z' in function 'sum' do not exist.*" **We found only formal parameters can be correctly recognized as local variables.**

![ed](https://i.stack.imgur.com/MhIN6.png)

If we re-declare z as a global variable and encode it through `GlobalVariables` option, everything works as we expect.

![ed2](https://i.stack.imgur.com/9hDHv.png)

```
tigress --Environment=x86_64:Linux:Gcc:7.5                      
        --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
        --Transform=EncodeData --LocalVariables='sum:x,y' 
        --out=vir_EncodeData.c ../tigressTest.c
```

### Virtualize w/ Encode Arithmetic
The transformation *Encode Arithmetic* replaces integer arithmetic with randomly selected more complex expressions. (Note that in the latest version *3.3.2*, transformed expressions can be dumped into a file)
```
 tigress --Environment=x86_64:Linux:Gcc:7.5 
         --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch 
         --Transform=EncodeArithmetic --Functions=sum 
         --out=vir_EncodeArithmetic.c ../tigressTest.c
```

### Virtualize w/ Encode External
The transformation *Encode External* replaces the direct calls to external functions with indirect ones.

```
tigress -ldl --Environment=x86_64:Linux:Gcc:7.5
     --Transform=InitEncodeExternal
        --Functions=init_tigress
        --InitEncodeExternalSymbols=getpid
     --Transform=Virtualize
        --Functions=sum
        --VirtualizeDispatch=switch
	 --Transform=EncodeExternal
	    --Functions=sum
		--EncodeExternalSymbols=getpid
    --out=vir_EncodeExternal.c tigressTest.c	  
```

❗ ❗ The compiled result returned *segmentation fault*.

### Virtualize w/ Encode Branches
The transformation *Encode Branches* makes it harder for automatic analysis tools to determine the target of branches.

```
tigress --Environment=x86_64:Linux:Gcc:7.5
     --Transform=Virtualize
        --Functions=sum
        --VirtualizeDispatch=switch
     --Transform=InitBranchFuns
        --InitBranchFunsCount=2
     --Transform=AntiBranchAnalysis
        --Functions=sum
    --out=vir_EncodeBranch.c tigressTest.c
```

### Virtualize w/ AntiAliasAnalysis
The transformation *AntiAliasAnalysis* disrupts static analysis tools that make use of inter-procedural alias analysis.

```
tigress --Environment=x86_64:Linux:Gcc:7.5
     --Transform=Virtualize
        --Functions=sum
        --VirtualizeDispatch=switch
	 --Transform=AntiAliasAnalysis
	    --Functions=sum
		--AntiAliasAnalysisObfuscateIndex=false
    --out=vir_AntiAliasAnalysis.c tigressTest.c
```

### Virtualize w/ AntiTaintAnalysis
The transformation *AntiTaintAnalysis* disrupts analysis tools that make use of dynamic taint analysis. Currently, it can only un-taint a few variables.

```
tigress --Environment=x86_64:Linux:Gcc:7.5
     --Transform=Virtualize 
        --Functions=sum 
        --VirtualizeDispatch=switch  
	 --Transform=InitImplicitFlow 
	    --Functions=sum 
	 --Transform=AntiTaintAnalysis 
	    --Functions=sum 
    --out=vir_AntiTaintAnalysis.c tigressTest.c
```

### Virtualize w/ Randomize Arguments
The transformation *Randomize Arguments* randomizes the order of arguments to a function and optionally adds extra bogus arguments.

```
tigress --Environment=x86_64:Linux:Gcc:7.5
     --Transform=Virtualize
        --Functions=sum
        --VirtualizeDispatch=switch
	 --Transform=RndArgs
		--RndArgsBogusNo=5
		--Functions=sum
    --out=vir_Randarg.c ../tigressTest.c
```

### Virtualize w/ Inline
The transformation *Inline* replaces a function call with the body of the function. ❗ ❗ It is **not available** in *Tigress* 3.1
