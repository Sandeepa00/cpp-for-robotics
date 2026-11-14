#include <iostream>

void increaseSpeed(int speed)
{
    speed += 20;
}

void increaseSpeedReference(int& speed)
{
    speed += 20;
}

int main()
{
    int robotSpeed = 40;
    increaseSpeed(robotSpeed);

    std::cout<<"After pass by value : "<<robotSpeed<<std::endl;

    increaseSpeedReference(robotSpeed);
    std::cout<<"After pass by reference : "<<robotSpeed<<std::endl;

}