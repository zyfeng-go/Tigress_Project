#!/bin/bash

tigress -ldl --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitEncodeExternal \
        --Functions=init_tigress \
        --InitEncodeExternalSymbols=getpid \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
	 --Transform=EncodeExternal \
	    --Functions=sum \
		--EncodeExternalSymbols=getpid \
    --out=vir_EncodeExternal.c tigressTest.c
	  
	  