#include <iostream>

#include "DataTypes.h"

extern int s_SampleVar;
int s_SampleVar2;

void IncrementByPointer(int* val)
{
    (*val)++;
}

void IncrementByRef(int& val)
{
    val++;
}

int main()
{
    std::cout << "Hello World!\n";

    DataTypes *dt = new DataTypes;
    dt->displayAllDataTypes();

    if (-3) {
        std::cout << "IF block executed..." << std::endl;
    }
    else {
        std::cout << "Else block executed..." << std::endl;
    }

    // For-Loop
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "FOR Loop: "<<i << std::endl;
    }

    // Infinite For Loop
    /*for (;;) {
        std::cout << "Infinite For Loop..." << std::endl;
    }*/

    // While Loop
    int i = 0;
    while (i < 5) {
        std::cout << "WHILE Loop: " << i << std::endl;
        i++;
    }

    // Do-While Loop
    do
    {
        std::cout << "Do-While Loop..." <<i<< std::endl;
        i++;
    } while (i<10);

    // Control flow- continue, break, return
    for (size_t i = 0; i < 15; i++)
    {
        if (i % 2 == 0)
            continue;

        if (i > 11)
            break;

        std::cout << "Control flow- Continue: " << i << std::endl;
    }

    //return -1;
    std::cout << "Log after retrun statement ...." << std::endl;


    // Pointers
    int a = 5;
    void* ptr = &a;
    int* ptr2 = &a;
    double* ptr3 = (double *) & a;

    // De-referencing pointer to access value
    *ptr2 = 280;
    std::cout << "Poiners  a="<<a << std::endl;

    // Double Pointer OR pointer of pointer
    int** ptr4 = &ptr2;


    // string using chaaar array
    char* buffer = new char[8];
    memset(buffer, 0, 8);
    std::cout << "String  buffer=" << buffer << std::endl;
    delete[] buffer;

    const char* str = "Hello";
    std::cout << "String  str=" << str << std::endl;

    int myVal = 5;
    IncrementByPointer(&myVal);
    std::cout << "Increment By Pointer  myVal=" << myVal << std::endl;
    IncrementByRef(myVal);
    std::cout << "Increment By Reference  myVal=" << myVal << std::endl;
}

