#!/usr/bin/env bash

c++ -c -Idir/ src/sum.cpp -o build/sum.o

c++ -c -Idir/ src/subtract.cpp -o build/subtract.o

ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o

g++ src/main.cpp -Lbuild -lipb_arithmetic -o test_ipb_arithmetic

mv test_ipb_arithmetic results/bin/test_ipb_arithmetic 
