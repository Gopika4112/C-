#include "Header Files/Log.h"
#include <iostream>

int main()
{
    int x = 5;
    // bool result=x==5;
    if (x == 5)
        Log("x is 5");
    else if(x==6)
        Log("x is 6");
    else
        Log("x is neither 5 nor 6");

}