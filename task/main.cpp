#include "task.hpp"
#include <iostream>
#include <cstring>

void some_func(int option);

int main(int argc, char** argv)
{
    Matrix mat;
    Vector vec;

    //////////////////////////////////
    // task one
    //////////////////////////////////
    Vector res = multiply(mat, vec);

    for ( int i = 0; i < size; i++ )
        std::cout << res.m[i];
    std::cout << std::endl;

    /////////////////////////////////
    // task two
    /////////////////////////////////
    task_two(4);

    /////////////////////////////////
    // task thre
    /////////////////////////////////
    task_three(argc, argv);


    return 0;
}

void task_two(int option)
{
    if (option == 0)
        std::cout << "fart" << std::endl;
    else if (option == 1)
        std::cout << "eat" << std::endl;
    else if (option == 2)
        std::cout << "sleep" << std::endl;
    else if (option == 3)
        std::cout << "bake" << std::endl;
    else
        std::cout << "code" << std::endl;
}

void task_three(int argc, char** argv) {
    for ( int i = 0; i < argc; i++) {
        if (std::strcmp(argv[i], "help") == 0)
            std::cout << "Haha" << std::endl;
        else if (std::strcmp(argv[i], "work") == 0)
            std::cout << "No!" << std::endl;
        else if (std::strcmp(argv[i], "sleep") == 0)
            std::cout << "Yes please!" << std::endl;
        // and much more of if-elses...
    }
}
