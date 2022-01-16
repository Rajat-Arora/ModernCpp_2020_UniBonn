#!/bin/bash

echo "Number of lines in data.dat are:"
wc -l < data.dat

echo "Number of lines in data.dat that contain dolar or dalor are:"
grep -E "dolor|dalor" data.dat | wc -l

echo "Number of words in data.dat are:"
wc -w < data.dat

echo "Number of words starting with mol are:"

grep -E '\bmol' data.dat | wc -l



