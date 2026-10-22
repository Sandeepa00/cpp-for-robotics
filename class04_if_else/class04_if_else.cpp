#include <iostream>

int main()
{
    int battery = 25;

    if (battery > 80)
    {
        std::cout << "Battery Full" << std::endl;
    }
    else if (battery >= 30 && battery <= 80)
    {
        std::cout << "Battery Normal" << std::endl;
    }
    else
    {
        std::cout << "Low Battery" << std::endl;
    }

    return 0;
}