#!/bin/bash

# Baseline for Recipe #3
tigress --Seed=42 --Statistics=0 --Verbosity=0 --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitEntropy \
        --Functions=init_tigress \
        --InitEntropyKinds=vars \
     --Transform=InitOpaque \
        --Functions=init_tigress \
        --InitOpaqueStructs=list,array,env  \
     --Transform=Virtualize \
        --Skip=false \
        --VirtualizeDispatch=direct \
        --Functions=sum \
    --out=recipe_3_vir.c ../../tigressTest.c
	
mv a.out recipe_3_vir.exe
	
tigress --Seed=42 --Statistics=0 --Verbosity=0 --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitEntropy \
        --Functions=init_tigress \
        --InitEntropyKinds=vars \
     --Transform=InitOpaque \
        --Functions=init_tigress \
        --InitOpaqueStructs=list,array,env  \
     --Transform=Virtualize \
        --Skip=false \
        --VirtualizeDispatch=direct \
        --Functions=sum \
     --Transform=JitDynamic \
        --Skip=false \
        --Functions=sum \
        --JitDynamicCodecs=xtea \
        --JitDynamicBlockFraction=%100 \
    --out=recipe_3.c tigressTest.c

mv a.out recipe_3.exe