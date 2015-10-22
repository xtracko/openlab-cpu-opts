#include "task.hpp"

Vector multiply(Vector vec, Matrix mat)
{
    Vector res;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            res.m[i] += vec.m[j] * mat.m[j][i];
    return res;
}
