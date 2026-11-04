#include <iostream>

int main()
{
    for (int waypoint_id =1 ; waypoint_id <= 10; waypoint_id++)
    {
        if (waypoint_id%3==0)
        {
            continue;
        }
        
        
        if (waypoint_id==8)
        {
            break;
        }

        std::cout<<"Processing waypoint: "<<waypoint_id<<std::endl;


    }
    std::cout<<"Processing complete!"<<std::endl;
}