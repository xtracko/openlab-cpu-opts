% Cpu code optimizations
% Jiří Novotný & Karel Kubíček
% 23. October 2015
----

# Why to write optimized code

*Well, it's pretty obvious.*

----

# Use best algorithm for you use case

>
~~~~~~~c++
bool isPrime(int p) {
  for (int i = 0; i < p; i++)
    if (p % i == 0) return false;
  return true;
}
~~~~~~~
>
```c++
bool isPrimeBetter(int p) {
  for (int i = 0; i < sqrt(p); i++)
      if (p % i == 0) return false;
  return true;
}
```
>
```c++
bool isPrimeEvenBetter(int p) {
  for (int i = 0; i*i < p; i++)
    if (p % i == 0) return false;
  return true;
}
```

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
> * SGX (in development)

TUDO: obrázek SSE instrukcí

----

# The C/C++ programmer view

* know your compiler
* do you know what -O0 -O1 -O2 -O3 means?

## Vectorization
## System allocator
## Custom allocators
## Chaching

----
# Profiling

* sampling
* instrumentation

----

# Paralelization

## C++11 threads
## C++11 atomic instructions

----

# Summary

1. write functonal correct code
2. analyze the code and determine parts that are slow and critical
3. optimize them

## Great tools
* profilers as `msvc` for win & `perf` for linux
* https://gcc.godbolt.org/

