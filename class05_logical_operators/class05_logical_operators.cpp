#include <iostream>

int main()
{
    int battery = 50;
    bool obstacle = false;

    if (battery > 20 && !obstacle)
    {
        std::cout << "Robot Moving" << std::endl;
    }
    else
    {
        std::cout << "Robot Stopped" << std::endl;
    }

    return 0;
}