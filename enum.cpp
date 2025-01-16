#include <iostream>

// we want to ddefine a type which can only be one of the below 3 and grouped in a particular fashion
//  int A=0;
//  int B=1;
//  int C=2;

enum Example : char
{
    A = 5,
    B,
    C
};

// int a=0;
// int b=1;
// int c=2;
int main()
{
    // int value = B;
    Example value = B;
    // Example value=5; => ERROR : a value of type "int" cannot be used to initialize an entity of type "Example"
    if (value == B)
    {
        // do something here
    }
    std::cin.get();
}