#include <iostream>

class Player
{
public:
    int x, y;
    int speed;

    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

// void Move(Player& player, int xa,int ya){
//     player.x+=xa*player.speed;
//     player.y+=ya*player.speed;
// }
int main()
{
    Player player;
    player.x = 5;
    // Move(player,1,-1);
    player.Move(1, -1);
    std::cin.get();
}