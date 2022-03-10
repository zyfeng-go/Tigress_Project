## Investigation on possible impact from other transformations with Virtualization

Virtualization is so strong an obfuscation that researchers are eager to explore. In this project, our group would like to know what kind of impact that other transformations would potentially add to Virtualization by running experiments.

*More specifically, We would like to start with a simple tigressTest.c file to investigate the potential impact. Noticed that we keep the default configuration for all transformations at the moment.*

### Check the impact added from *Jit*
Run the command ` tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=direct --Transform=JitDynamic --Functions=sum --out=vir_jit.c tigressTest.c`

### Check the impact added from *JitDynamic*
Run the command ` tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=direct --Transform=JitDynamic --Functions=sum --out=vir_jitDynamic.c tigressTest.c`

### Check the impact added from *Add Opaque*
Run the command ` tigress --Environment=x86_64:Linux:Gcc:7.5 --Transform=Virtualize --Functions=sum --VirtualizeDispatch=direct --Transform=AddOpaque --Functions=sum --out=vir_add_opaque.c tigressTest.c`

