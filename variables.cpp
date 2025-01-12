#include<iostream>

int main(){

    std::cout<<"integer - "<<sizeof(int)<<std::endl;
    std::cout<<"char - "<<sizeof(char)<<std::endl;  //store numbers as well as characters
    std::cout<<"short - "<<sizeof(short)<<std::endl;
    std::cout<<"long - "<<sizeof(long)<<std::endl;
    std::cout<<"long long - "<<sizeof(long long)<<std::endl;
    std::cout<<"float - "<<sizeof(float)<<std::endl;
    std::cout<<"double - "<<sizeof(double)<<std::endl;
    std::cout<<"bool - "<<sizeof(bool)<<std::endl;
           
    int var=8;   //-2b -> 2b
    std::cout<<var<<std::endl;
    var=15;
    std::cout<<var<<std::endl;
    unsigned int var1=22; //0 -> 4.29 b
    std::cout<<var1<<std::endl;

    char a='A';
    char a1= 65;
    short a2=65;
    short a3='A';
    std::cout<<a<<" "<<a1<<" "<< a2<<" "<< a3<<std::endl;

    float v=5.5f;
    double v1=5.2;
    std::cout<<v<<" "<<v1<<std::endl;

    bool b1=true;
    bool b2=false;
    std::cout<<b1<<" "<<b2<<std::endl;

}