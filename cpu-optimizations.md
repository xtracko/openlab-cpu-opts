% Cpu code optimizations
% Jiří Novotný & Karel Kubíček
% 23. October 2015
----

# Why to write optimized code

*Well, it's pretty obvious.*

----

# CPU

TUDU: cpu.jpg

## Pipeline

TUDU: obrázek

## IO/OOO execution

TUDO obrázek

## Modern instructions

> * SSE
> * AVX
> * AVX-512
> * TSX
> * (in development)

TUDO: obrázek SSE instrukcí

----

# The C/C++ programmer view

## Vectorization
## System allocator
## Custom allocators
## Chaching

----

# Paralelization

## C++11 threads
## C++11 atomic instructions

----

# Summary

1. write functonal correct code
2. analyze the code and determine parts that are slow and critical
3. optimize them

