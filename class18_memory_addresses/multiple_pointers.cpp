#include <iostream>

int main()
{
    int speed = 30;
    int* ptr1 = &speed;
    int* ptr2 = &speed; 

    std::cout<<"Original speed: "<<speed<<std::endl;

    *ptr1 =60;
    std::cout<<"Updated speed through ptr2: "<< *ptr2 <<std::endl;
    std::cout<<"Address of speed: "<<&speed<<std::endl;
    std::cout<<"Address in ptr1: "<< ptr1 <<std::endl;
    std::cout<<"Address in ptr2: "<< ptr2 <<std::endl;



}
