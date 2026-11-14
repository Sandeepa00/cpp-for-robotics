#include <iostream>

void updateBattery (int& battery)
    {
        battery =75;
    }

int main()
{
    int battery =100 ;
    std::cout<<"Battery before update: "<<battery<<std::endl;

    updateBattery(battery);

    
    std::cout<<"Battery after update: "<<battery<<std::endl;

}