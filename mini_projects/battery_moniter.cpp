#include <iostream>

int main()
{
    int battery = 49;
    if (battery > 80)
    {
        std::cout<<"Battery Full"<<std::endl;
    }
    else if(battery > 30 && battery < 80)
    {
        std::cout<<"battery normal"<<std::endl;
    }
    else
    {
        std::cout<<"battery low"<<std::endl;
    }
    return 0;
}