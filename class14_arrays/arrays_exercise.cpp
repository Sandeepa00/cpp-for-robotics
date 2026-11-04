#include<iostream>

int main()
{
    int sensor_reading[5] ={15, 25, 35, 45, 55};
    std::cout<<sensor_reading[2]<<std::endl;//for printing one value


    sensor_reading[2] = 30; //to change the reading
    std::cout<<sensor_reading[2]<<std::endl;

    for (int i=0;i<5;i++)// for printing all values
    {
        std::cout<<"Sensor Index "<<i<<" : "<<sensor_reading[i] <<std::endl;
    }

    std::cout<<"Total Size : "<<sizeof(sensor_reading)<<std::endl;//give the total memory occupied by array in bytes
    std::cout<<"No: of sensor reading : "<<sizeof(sensor_reading)/sizeof(sensor_reading[0])<<std::endl;//to get no: of elements



}