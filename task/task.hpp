#pragma once

const int size = 100;

struct Vector {
    int m[size];
};

struct Matrix {
    int m[size][size];
};


Vector multiply(Vector vec, Matrix mat);
