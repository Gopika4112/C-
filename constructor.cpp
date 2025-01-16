#include<iostream>

class Entity{
    public:
        float X,Y;

        Entity(){
            std::cout<<"Created Entity!"<<std::endl;
            X=0.0f;
            Y=0.0f;
        };

        Entity(float x, float y){
            X=x;
            Y=y;
        };

        ~Entity(){
            std::cout<<"Destroyed Entity!"<<std::endl;
        };

        void Print(){
            std::cout<<X<<" , "<<Y<<std::endl;
        }
};

void Function(){
    Entity e;
    e.Print();
}

int main(){
    Function();
    // Entity e;
    // std::cout<<e.X<<std::endl;
    // e.Print();

    // Entity e1(5.0f,10.2f);
    // e1.Print();
    std::cin.get();
}