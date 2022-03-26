#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
	 --Transform=Inline \
		--Functions=sum \
		--InlineKeepFunctions=mul \
    --out=vir_Inline.c tigressTest.c
	  
	  