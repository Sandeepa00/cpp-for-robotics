#include <iostream>

int main()
{
    int battery = 50;

    std::cout << "Initial Battery: " << battery << std::endl;

    battery += 20;
    std::cout << "After Charging: " << battery << std::endl;

    battery--;
    std::cout << "After One Use: " << battery << std::endl;

    return 0;
}