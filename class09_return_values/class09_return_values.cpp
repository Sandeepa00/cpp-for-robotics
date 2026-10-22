#include <iostream>

int multiply(int a, int b)
{
    return a * b;
}

int square(int number)
{
    return number * number;
}

int main()
{
    std::cout << "Multiply: " << multiply(4, 5) << std::endl;
    std::cout << "Square of 3: " << square(3) << std::endl;
    std::cout << "Square of 8: " << square(8) << std::endl;

    return 0;
}