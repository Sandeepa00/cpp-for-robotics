#include <iostream>

int main()
{
    int battery = 80;
    float speed = 2.5;
    char grade = 'A';
    bool obstacle = false;

    std::cout << "Battery: " << battery << "%" << std::endl;
    std::cout << "Speed: " << speed << " m/s" << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Obstacle Detected: " << obstacle << std::endl;

    return 0;
}