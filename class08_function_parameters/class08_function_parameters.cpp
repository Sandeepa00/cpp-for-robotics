#include <iostream>

void moverobot(int steps)
{
    std::cout<<"Robot moved "<< steps <<" steps"<<std::endl;
}

void batterystatus(int battery)
{
    if (battery>20)
    {
        std::cout<<"Battery ok"<<std::endl;
    }
    else
    {
        std::cout<<"Low Battery"<<std::endl;
    }
}

int main()
{
    moverobot(3);
    moverobot(7);
    moverobot(10);

    batterystatus(80);
    batterystatus(15);

    return 0;
}