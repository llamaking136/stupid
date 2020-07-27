#!/bin/bash
# a shell file because i dont know how makefiles work

rm stupid
g++ header/stupid.cpp -o ./stupid
./stupid test.stupid
