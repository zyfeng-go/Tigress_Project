#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
	 --Transform=InitImplicitFlow \
	    --Functions=sum \
	 --Transform=AntiTaintAnalysis \
	    --Functions=sum \
    --out=vir_AntiTaintAnalysis.c tigressTest.c
	  
	  