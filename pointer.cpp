#include <iostream>
#include <string.h>

#define LOG(x) std::cout<< x <<std::endl

int main(){
    // void* ptr=nullptr;
    int var=8;
    int* ptr=&var;
    *ptr=10;
    LOG(var);

    char* buffer= new char[8]; //allocates 8 bytes of memory and returns a pointer to the beginning of the block of memory
    memset(buffer,0,8);
    
    char** ptr1= &buffer;

    delete[] buffer;
    std::cin.get();
}