#include <iostream>

int main()
{
    int reading[5] = {12, 25, 33, 48, 55};
    int sensor_index = 2;
    int calibrated_value = 38;
    reading[sensor_index] = calibrated_value;

    for (int i=0;i<5;i++)
    {
        std::cout<<"sensor "<<i<<": "<<reading[i]<<std::endl;
    }

    std::cin<<"Enter the sensor index"<<std::endl;

    return 0;
}
