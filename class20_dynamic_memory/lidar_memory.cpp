#include <iostream>

int main()
{
    int size;
    std::cout<<"Enter the number of lidar reading : ";
    std::cin>>size;

    
    if(size>0)
    {
        int total =0;
        int* readings = new int[size];

        for (int i=0;i<size;i++)
        {
            std::cout<<"Enter the reading : ";
            std::cin>>readings[i];
            total = total + readings[i];
      
        }

        double Average =static_cast<double>(total)/size;

        std::cout<<"Lidar Reading : ";
        for (int i = 0; i < size; i++)
        {
            std::cout<<readings[i]<<",";
        }

        std::cout<<"\nAverage of readings: "<<Average<<std::endl;

        delete[] readings;
        readings = nullptr;

        std::cout<<"Memory released"<<std::endl;


    }
    else
    {
        std::cout<<"Enter a valid  number"<<std::endl;
    }

    return 0;
}
