#!/bin/bash

rm ./ok

gcc main.c -o ok -L. -linsertionsort -Wl,-rpath,.
