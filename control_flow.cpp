#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if ((i + 1) % 2 == 0)
            // continue;
            // break;
            return 0;
        std::cout << i << std::endl;
    }
    std::cin.get();
}