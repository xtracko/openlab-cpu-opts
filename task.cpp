int main() {
    return 0;
}

const int size = 100;


struct Matrix {
    int m[size][size];
};

int transpose(Matrix mat)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            std::cout << mat.m[j][i];
    }
}
