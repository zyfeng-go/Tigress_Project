#!/bin/bash

# Baseline for Recipe #2
tigress --Seed=42 --Statistics=0 --Verbosity=0 --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitEntropy \
        --Functions=init_tigress \
        --InitEntropyKinds=vars \
     --Transform=InitOpaque \
        --Functions=init_tigress \
        --InitOpaqueStructs=list,array,env  \
     --Transform=Virtualize \
        --Skip=false \
        --VirtualizeDispatch=ifnest \
        --Functions=sum \
    --out=recipe_2_vir.c ../../tigressTest.c
	
tigress --Seed=42 --Statistics=0 --Verbosity=0 --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitEntropy \
        --Functions=init_tigress \
        --InitEntropyKinds=vars \
     --Transform=InitOpaque \
        --Functions=init_tigress \
        --InitOpaqueStructs=list,array,env  \
     --Transform=Virtualize \
        --Skip=false \
        --VirtualizeDispatch=ifnest \
        --Functions=sum \
     --Transform=SelfModify \
       --Functions=sum \
       --SelfModifySubExpressions=false \
	   --SelfModifyBogusInstructions=10 \
    ../../tigressTest.c --out=recipe_2.c 
	
gcc --static -Wl,--omagic recipe_2.c -o recipe_2.exe