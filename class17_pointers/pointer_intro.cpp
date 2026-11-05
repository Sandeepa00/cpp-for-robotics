#include <iostream>

int main()
{
    int battery = 90;
    int* ptr = &battery;
    *ptr = 50;

    std::cout <<battery<< std::endl;
    std::cout << &battery << std::endl;
    std::cout << *ptr <<std::endl;

    return 0;
}