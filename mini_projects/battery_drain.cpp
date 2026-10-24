#include <iostream>

int battery = 100;

int main()
{
    while (battery>0)
    {
        std::cout<<"Battery: "<<battery<<"%"<<std::endl;
    
        if (battery<=40 && battery>=21)
        {
            std::cout<<"Warning: Low battery!"<<std::endl;
        }
        else if (battery<=20)
        {
           std::cout<<"Critical: Return to charging station!"<<std::endl;
         
        }
            

        battery= battery-20;

    }
    std::cout<<"Robot Stopped"<<std::endl;

return 0;
}