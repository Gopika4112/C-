#include <iostream>

int Multiply(int a, int b){
    return a*b;
}

void Log(int a, int b){
    int result=Multiply(a,b);
    std::cout<<result<<std::endl;
}

int main(){
    Log(3,2);
    Log(5,4);
    Log(6,7);
}