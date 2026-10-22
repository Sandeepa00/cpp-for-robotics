#include <iostream>

int battery = 5;

int main()
{
    while (battery>0)
    {
        std::cout<<"Battery: "<<battery<<"%"<<std::endl;
        battery--;
    }

std::cout<<"Battery Empty!"<<std::endl;

return 0;
}
