#include <iostream>

int main()
{
    int distance[5] = {50, 100, 20, 400, 150};
    int total = 0;
    int minimum = distance[0];
    int maximum = distance[0];
    int nearbycount = 0;
    

    for(int i=0;i<5;i++)
    {
        total += distance[i];

        if (distance[i]<minimum)
        {
            minimum = distance[i];

        }

        if (distance[i]>maximum)
        {
            maximum = distance[i];
        }

        if (distance[i]<=50)
        {
            nearbycount++;
        }
    }

    double average = static_cast<double>(total)/5;

   

    std::cout<<"Total distance: "<<total<<std::endl;
    std::cout<<"Average distance:"<<average<<std::endl;
    std::cout<<"Minimum distance:"<< minimum <<std::endl;
    std::cout<<"Maximum distance:"<< maximum <<std::endl;
    std::cout<<"Nearby obstacles:"<< nearbycount <<std::endl;



    return 0;
}