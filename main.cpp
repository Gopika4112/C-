#include "Header Files/Log.h"
#include<iostream>

int main(){
    int a=8;
    a++;
    const char* string ="Hello";
    for (int i = 0; i < 5; i++)
    {
        const char c=string[i];
        std::cout<< c <<std::endl;
    }
    
    InitLog();
    Log("Hello from main!");
    std::cin.get();
    return 0;
}