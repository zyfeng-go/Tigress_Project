#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
	 --Transform=AntiAliasAnalysis \
	    --Functions=sum \
		--AntiAliasAnalysisObfuscateIndex=false \
    --out=vir_EncodeBranch.c tigressTest.c
	  
	  