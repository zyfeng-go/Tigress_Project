#!/bin/bash

# Baseline for Recipe #4
tigress --Seed=42 --Statistics=0 --Verbosity=1 --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitEntropy \
        --Functions=init_tigress \
        --InitEntropyKinds=vars \
     --Transform=InitOpaque \
        --Functions=init_tigress \
        --InitOpaqueStructs=list,array,env  \
	 --Transform=Merge \
	    --MergeFlatten=false \
		--MergeName=merged \
		--Functions=mul,sum,init_tigress \
     --Transform=Virtualize \
        --VirtualizeDispatch=direct \
        --Functions=merged \
    --out=recipe_4_bsl.c tigressTest.c

mv a.out recipe_4_bsl.exe

tigress --Seed=42 --Statistics=0 --Verbosity=1 --Environment=x86_64:Linux:Gcc:7.5 \
	 --Transform=InitEntropy \
		--Functions=init_tigress \
		--InitEntropyKinds=vars \
	 --Transform=InitOpaque \
		--Functions=init_tigress \
		--InitOpaqueStructs=list,array,env  \
	 --Transform=Merge \
		--MergeFlatten=false \
		--MergeName=merged \
		--Functions=mul,sum,init_tigress \
	 --Transform=Virtualize \
		--VirtualizeDispatch=direct \
		--Functions=merged \
	--Transform=EncodeLiterals \
		--EncodeLiteralsKinds=string \
		--Functions=merged \
	--out=recipe_4.c tigressTest.c 
	
mv a.out recipe_4.exe