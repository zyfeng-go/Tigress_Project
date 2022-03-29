#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
	 --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeNumberOfBogusFuns=1  \
		--VirtualizeBogusFunKinds=trivial  \
    --out=Bogus_Func.c ../tigressTest.c

mv a.out Bogus_Func
