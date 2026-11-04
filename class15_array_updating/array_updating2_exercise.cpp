#include <iostream>

int main()
{
    int reading[5] = {12, 25, 33, 48, 55};
    int sensor_index;
    int new_reading;

    std::cout<<"Enter sensor index (0-4): "<<std::endl;
    std::cin>>sensor_index;
    std::cout<<"Enter new sensor reading: "<<std::endl;
    std::cin>>new_reading;

    if (sensor_index>=0 && sensor_index<5)
    {
        reading[sensor_index] = new_reading;
    }
    else
    {
        std::cout<<"Invalid sensor index!"<<std::endl;
    }


    for (int i=0;i<5;i++)
    {
        std::cout<<"sensor "<<i<<": "<<reading[i]<<std::endl;
    }
}
