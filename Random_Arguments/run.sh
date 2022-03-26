#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
	 --Transform=RndArgs \
		--RndArgsBogusNo=5 \
		--Functions=sum \
    --out=vir_Randarg.c ../tigressTest.c
	  
	  