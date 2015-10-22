#include <iostream>

const int size = 100;

struct Vector {
    int m[size];
};

struct Matrix {
    int m[size][size];
};

Vector multiply( Matrix mat, Vector vec )
{
    Vector res;
    for ( int i = 0; i < size; i++ )
        for ( int j = 0; j < size; j++ )
            res.m[i] += mat.m[j][i] * vec.m[j];
    return res;
}


int main()
{
    Matrix mat;
    Vector vec;

    Vector res = multiply(mat, vec);

    for ( int i = 0; i < size; i++ )
        std::cout << res.m[i];
    std::cout << std::endl;

    return 0;
}
