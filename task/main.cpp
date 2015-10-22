#include "task.hpp"
#include <iostream>


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
