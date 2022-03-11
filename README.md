## Investigation on possible impact from other transformations with Virtualization

Virtualization is so strong an obfuscation that researchers are eager to explore. In this project, our group would like to know what kind of impact that other transformations would potentially add to Virtualization by running various experiments.

*More specifically, We would like to start with simple tigressTest.c file to investigate the potential impact. Noticed that we keep the default configuration for all transformations at the moment.*

### Baseline
*Tigress* virtualizes the function *sum* in the program *tigressTest.c* with `switch` dispatch method: `tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch --out=baseline.c tigressTest.c`. More specifically, we will focus on the obfuscation code within function *sum*.

### Check the impact added from *Jit*
In order to invoke *Jit* and *JitDynamic*, we have to specifically include `#include ".../jitter-amd64.c"` to our source code file. 

Next, obfuscating the source file with both *Jit* and *Virtualize* transformation: `tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch --Transform=Jit --Functions=sum --out=vir_Jit.c tigressTest.c`.

### Check the impact added from *JitDynamic*
*JitDynamic* transformation is similar to the *Jit* except that the jitted code is continuously modified and updated at runtime.

Obfuscating the source file with *JitDynamic* and *Virtualization* Transformation: `tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch --Transform=JitDynamic --Functions=sum --out=vir_JitDynamic.c tigressTest.c`.

### Check the impact added from *Opaque*
We would like to further investigate the impact from opaque predicates.

We start the obfuscation by creating the opaque invariant data structure -- list and add one opaque to the function *sum*.

 The command we ran: `tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=switch --Transform=InitOpaque --Functions=sum --InitOpaqueStructs=list --Transform=AddOpaque --Functions=sum --AddOpaqueStructs=list --out=vir_add_opaque.c tigressTest.c`.

*Noticed that *Tigress* will generate opaque expression using linked lists, arrays, input and entropy.

### Evaluation
The raw results of the obfuscated function *sum* are saved under *diff* directory.
