#include <iostream>
#include <string.h>

#define LOG(x) std::cout << x << std::endl

void Increment(int value)
{
    value++;
}

void increment(int* value)
{
    (*value)++;
}

void increment_ref(int& value){
    value++;
}
int main()
{
    int a = 5;
    int b=8;

    int* ref=&a;
    *ref=2;
    ref=&b;
    *ref=1;
    LOG(a);
    LOG(b);

    LOG("======================");
    // int* b=&a;
    // int &ref = a; // ref is an alias for a
    // ref=b => a=8, b=8
    // ref=2;
    Increment(a);
    LOG(a);
    increment(&a);
    LOG(a);
    increment_ref(a);
    LOG(a);
    std::cin.get();
}