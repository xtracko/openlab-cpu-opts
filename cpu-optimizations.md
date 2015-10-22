% Cpu code optimizations
% Jiří Novotný & Karel Kubíček
% 23. October 2015
----

# Why to write optimized code

*Well, it's pretty obvious.*

----

# Use best algorithm for you use case

~~~~~~~c++
bool isPrime(int p) {
  for (int i = 0; i < p; i++)
    if (p % i == 0) return false;
  return true;
}
~~~~~~~

----

# Use best algorithm for you use case


~~~~~~~c++
bool isPrime(int p) {
  for (int i = 0; i < p; i++)
    if (p % i == 0) return false;
  return true;
}
~~~~~~~

~~~~~~~c++
bool isPrimeBetter(int p) {
  for (int i = 0; i < sqrt(p); i++)
      if (p % i == 0) return false;
  return true;
}
~~~~~~~

----

# Use best algorithm for you use case


~~~~~~~c++
bool isPrime(int p) {
  for (int i = 0; i < p; i++)
    if (p % i == 0) return false;
  return true;
}
~~~~~~~

~~~~~~~c++
bool isPrimeBetter(int p) {
  for (int i = 0; i < sqrt(p); i++)
      if (p % i == 0) return false;
  return true;
}
~~~~~~~

~~~~~~~c++
bool isPrimeEvenBetter(int p) {
  for (int i = 0; i*i < p; i++)
    if (p % i == 0) return false;
  return true;
}
~~~~~~~

----

# CPU
!["Von Neumann Architecture" by Kapooht - Own work. Licensed under CC BY-SA 3.0 via Commons - https://commons.wikimedia.org/wiki/File:Von_Neumann_Architecture.svg](./img/vna.png)


----

# CPU

## Little of history :)

* Direct load of instruction from memory
    * Solution: cache
* Load, decode, translate needed memory address, execute, retire
    * Pipeline
![5 stages pipeline](./img/pipeline.png)\ 

----

## CPU -- Little of history :)

* Will this work?

~~~~~~~c++
int swap(int *a, int *b) {
  int *tmp = a;
  a = b;
  b = tmp;
}
~~~~~~~

![5 stages pipeline](./img/pipeline.png)\ 

----

## CPU -- Little of history :)

* Pipeline stall (bubble)
    * Out-of-order execution
![Out-of-order execution](./img/ooo.png)\ 

----

## CPU -- Little of history :)

* OOO needs to load a lot of instructions (128), what to do with conditional jumps?
    * Branch prediction
* OK, finally, our CPU is really fast, so fast, that memory is slow and does not provide input data
    * Simultaneous multithreading (HT)

----

### Simultaneous multithreading (HT)

![Out-of-order execution](./img/smt.png)\ 

----

# CPU -- Modern instructions  (x86 is not strict RISC)

> * SSE, SSE2-4.2 (128b)
* AVX, AVX2 (~ FMA in AMD's world) (256b)
* AVX-512 (512b)
* interesting (but not SIMD) new instructions:
    * [TSX](https://software.intel.com/en-us/blogs/2012/02/07/transactional-synchronization-in-haswell) -- Transactional Synchronization Extensions
    * [SGX](https://software.intel.com/en-us/blogs/2013/09/26/protecting-application-secrets-with-intel-sgx) (in development) -- Software Guard Extensions

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

----

# Try it yourself!

> * Go to crcs.cz -> OpenLab -> current week -> prepared code

## Sources
> * Intro images & idea: [A Journey Through the CPU Pipeline ](http://www.gamedev.net/page/resources/_/technical/general-programming/a-journey-through-the-cpu-pipeline-r3115)
 * (Almost) current architecture: [Haswell is here. Architecture](http://www.cnews.cz/clanky/haswell-je-zde-inovace-architektura-nove-generace-procesoru-intel)
 * http://www.codeproject.com/Articles/6154/Writing-Efficient-C-and-C-Code-Optimization
 * http://www.codeproject.com/Articles/6154/Writing-Efficient-C-and-C-Code-Optimization

