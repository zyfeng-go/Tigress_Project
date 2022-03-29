#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitImplicitFlow \
	    --Functions=sum \
	 --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeImplicitFlowPC=PCInit  \
    --out=PCInit.c ../tigressTest.c

mv a.out PCInit

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=InitImplicitFlow \
	    --Functions=sum \
	 --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeImplicitFlowPC=PCUpdate \
    --out=PCUpdate.c ../tigressTest.c

mv a.out PCUpdate