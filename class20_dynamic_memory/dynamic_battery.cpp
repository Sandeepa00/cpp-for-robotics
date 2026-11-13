#include <iostream>

int main()
{
    int* batterySensor = new int{100};
    std::cout<<"Initial battery: "<<*batterySensor<<"% "<<std::endl;

    *batterySensor =  75;
    std::cout<<"Updated Battery: "<<*batterySensor<<"% "<<std::endl;

    delete batterySensor;
    batterySensor = nullptr;
    std::cout<<"Battery memory released"<<std::endl;


}