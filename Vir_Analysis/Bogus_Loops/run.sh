#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
	 --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeBogusLoopIterations=2  \
		--VirtualizeBogusLoopKinds=trivial  \
    --out=Bogus_Loops.c ../tigressTest.c

mv a.out Bogus_Loops
