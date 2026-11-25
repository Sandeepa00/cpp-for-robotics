#include <iostream>

void displaySensorData(const int& battery,const int& lidar,const int& robot_speed)
{
    std::cout<<"Robot Sensor Report"<<std::endl;
    std::cout<<"Battery: "<<battery<<"%"<<std::endl;
    std::cout<<"LiDAR Distance: "<<lidar<<"cm"<<std::endl;
    std::cout<<"Robot Speed: "<<robot_speed<<"cm/s"<<std::endl;

}

int main()
{
    int battery =50;
    int lidar = 100;
    int robot_speed = 200;

    displaySensorData(battery, lidar, robot_speed);

    return 0;


}