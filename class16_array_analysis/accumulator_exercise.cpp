#include <iostream>

int main()
{
    int reading1 = 100;
    int reading2 = 200;
    int reading3 = 150;

    int total = 0;

    total += reading1;
    total += reading2;
    total += reading3;
    
    std::cout<<"Total sensor readings: "<<total<<std::endl;

    return 0;
}