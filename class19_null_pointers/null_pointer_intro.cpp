#include <iostream>

int main()
{
    int* lidarSensor = nullptr;
   

    if ( lidarSensor!= nullptr)
    {
        std::cout<< "Sensor value : "<< *lidarSensor<<std::endl;
    }

    else
    {
        std::cout<< "LiDAR sensor is not connected!"<<std::endl;
    }

    int lidarvalue = 100;
    lidarSensor = &lidarvalue;

    if (lidarSensor!=nullptr)
    {
        std::cout<< "LiDAR sensor connected successfully!"<<std::endl;
        std::cout<< "Sensor value : "<< lidarvalue<<std::endl;
       
       
    }
    
return 0;

}