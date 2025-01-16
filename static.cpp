#include <iostream>
static int s_variable = 5; //visible only to static.cpp

struct Entity{
    // int x,y;
    static int x,y;

    //staic methods cannot access non-static variables
    //a static method dosen't have a class instance
    static void Print(){
        std::cout<<x<<" , "<<y<<std::endl;
    }
};
int Entity::x;
int Entity::y;
int main(){
    // Entity e;
    // e.x=2;
    // e.y=3;
    Entity::x=2;
    Entity::y=3;
    // Entity e1={5,8};
    // Entity e1;
    Entity::x=5;
    Entity::y=8;

    Entity::Print();
    Entity::Print();
    std::cin.get();
}