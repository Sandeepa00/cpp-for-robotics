#include <iostream>

void robotGreeting()
{
    std::cout<<"Wellcome to Robotics!"<<std::endl;
}

void moveRobot()
{
    std::cout<<"Robot is Moving"<<std::endl;
}
void stopRobot()
{
    std::cout<<"Robot Stopped"<<std::endl;
}
int main()
{
    robotGreeting();
    moveRobot();
    moveRobot();
    stopRobot();
    robotGreeting();

    return 0;
}