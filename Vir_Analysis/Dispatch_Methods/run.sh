#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=switch  \
    --out=switch.c ../tigressTest.c
	
mv a.out switch
	  
tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=direct  \
    --out=direct.c ../tigressTest.c	  
	
mv a.out direct

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=indirect  \
    --out=indirect.c ../tigressTest.c	  
	
mv a.out indirect

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=call  \
    --out=call.c ../tigressTest.c	  
	
mv a.out call

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=ifnest  \
    --out=ifnest.c ../tigressTest.c	  
	
mv a.out ifnest

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=linear  \
    --out=linear.c ../tigressTest.c	  
	
mv a.out linear

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=binary  \
    --out=binary.c ../tigressTest.c	  
	
mv a.out binary

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeDispatch=interpolation  \
    --out=interpolation.c ../tigressTest.c	  
	
mv a.out interpolation