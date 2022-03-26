#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
	 --Transform=InitOpaque \
	 	--Functions=sum \
	 --Transform=InitBranchFuns \
        --InitBranchFunsCount=2 \
	 --Transform=AntiBranchAnalysis \
	    --Functions=sum \
    --out=vir_EncodeBranch.c tigressTest.c
	  
	  