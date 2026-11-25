#include <iostream>

void increaseRobotSpeed(int* ptr)
{
    if(ptr != nullptr)
    {
        *ptr = *ptr + 10;
    
    }
    else
    {
        std::cout<<"Robot speed controller unavailable"<<std::endl;
    }
}

int main()
{
    int robotSpeed = 40;
    increaseRobotSpeed(&robotSpeed);
    increaseRobotSpeed(nullptr);

    std::cout<<"Final Robot Speed: "<<robotSpeed<<std::endl;

}