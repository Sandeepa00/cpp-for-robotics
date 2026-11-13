# include <iostream>

int main()
{
    int battery = 90;
    int* batterySensor = nullptr;

    if (batterySensor != nullptr)
    {
        std::cout<<"Battery sensor connected!"<<std::endl;
        std::cout<<"Sensor reading : "<<*batterySensor<<std::endl;
    }
    else
    {
        std::cout<<"Battery sensor not connected!"<<std::endl;
    }
    batterySensor = &battery;
    
    if (batterySensor != nullptr)
    {
        std::cout<<"Battery sensor connected!"<<std::endl;
        std::cout<<"Sensor reading : "<<*batterySensor<<std::endl;
    }
    else
    {
        std::cout<<"Battery sensor not connected!"<<std::endl;
    }

    batterySensor = nullptr;
    if (batterySensor != nullptr)
    {
        std::cout<<"Battery sensor connected!"<<std::endl;
        std::cout<<"Sensor reading : "<<*batterySensor<<std::endl;
    }
    else
    {
        std::cout<<"Battery sensor disconnected!!"<<std::endl;
    }

    return 0; 


}