#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
	 --Transform=Merge \
		--Functions=sum,mul \
		--MergeName=merged \
     --Transform=Virtualize \
        --Functions=merged \
        --VirtualizeDispatch=switch  \
    --out=vir_Merge.c tigressTest.c
	  