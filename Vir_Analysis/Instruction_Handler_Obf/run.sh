#!/bin/bash

tigress --Environment=x86_64:Linux:Gcc:7.5  \
     --Transform=Virtualize \
        --Functions=sum \
        --VirtualizeInstructionHandlerSplitCount=1  \
    --out=opaque_Num_1.c ../tigressTest.c

mv a.out opaque_Num_1