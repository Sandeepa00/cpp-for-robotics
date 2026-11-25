#include <iostream>


void reduceBattery(int* ptr)
{
    if (ptr != nullptr)
    {
        *ptr = *ptr-20;
    } 

    else 
    {
        std::cout<<"Battery sensor unavailable"<<std::endl;
    }
}

int main()
{
    int battery = 100;

    reduceBattery(&battery);
    reduceBattery(nullptr);

    std::cout<<"Final Battery: "<<battery<<std::endl;

}