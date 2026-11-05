#include <iostream>

int main()
{
    int battery = 100;
    int* ptr = &battery;

    std::cout<<"Original battery value : " <<battery<< std::endl;

    *ptr = 65;

    std::cout<<"Updated battery value : " <<battery<< std::endl;
    std::cout<<"Memory Address : " <<&battery<< std::endl;
    std::cout<<"Value through pointer : " << *ptr << std::endl;



}