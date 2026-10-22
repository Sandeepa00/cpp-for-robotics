#include <iostream>
int battery = 90; // global variable

void checkBattery()
{
    int battery = 30; //local variable shadows the global varible
    std::cout<<battery<<std::endl;
    std::cout<<::battery<<std::endl; //speacial operator to use global varible inside a fn when local one exist
}

int main()
{
    checkBattery();

    std::cout<<battery<<std::endl;
}