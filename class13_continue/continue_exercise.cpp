#include <iostream>

int main()
{
    for(int i=1 ; i<=10 ; i++)
    {
        if(i<=3){
            continue;
        }
        std::cout<<"Processing reading:"<<i<<std::endl;
    }
    std::cout<<"Sensor processing complete!"<<std::endl;
    return 0;
}