#pragma once

struct Vector {
    int m[size];
};

struct Matrix {
    int m[size][size];
};


Vector multiply(Vector vec, Matrix mat);
