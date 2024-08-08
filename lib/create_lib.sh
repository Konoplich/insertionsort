#!/bin/bash

FN="libinsertionsort";

gcc -shared -o "${FN}.so" -fPIC "${FN}.c"

cp "${FN}.so" ./..
cp "${FN}.h" ./..

