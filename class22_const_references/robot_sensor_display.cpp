#include <iostream>

void displayLidar(const int& Distance)
{
    std::cout<<"lidarDistance :"<<Distance<<std::endl;
}

int main()
{
    int lidarDistance = 250;
    std::cout<<"Original Distance :"<<lidarDistance<<std::endl;

    displayLidar(lidarDistance);



}