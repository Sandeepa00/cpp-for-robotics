#include <iostream>

int main()
{
    int robotSpeed = 40;
    int* ptr = &robotSpeed;
    int& ref = robotSpeed;

    *ptr = 60;
    std::cout<<"Speed using reference: "<<ref<<std::endl;

    ref =100;
    std::cout<<"Speed using pointer: "<<*ptr<<std::endl;


}