#include <iostream>

int Battery = 45;

int main()
{
    if (Battery>70)
    {
        std::cout<<"Battery High"<<std::endl;

    }
    else if(Battery>=45 && Battery<70)
    {
        std::cout<<"Battery Medium"<<std::endl;
    }
    else
    {
        std::cout<<"Battery Low"<<std::endl;
    }
}
