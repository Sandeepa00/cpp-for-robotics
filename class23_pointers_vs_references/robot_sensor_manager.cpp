#include <iostream>

int main()
{
    int lidarDistance = 250;
    int* ptr = &lidarDistance;
    int &ref = lidarDistance;

    *ptr =300;
    ref = 450;

    std::cout<<"Distance using pointer: "<<*ptr<<std::endl;
    std::cout<<"Distance using reference: "<<ref<<std::endl;
}