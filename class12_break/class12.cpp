#include <iostream>

int main()
{
    int count =1;
    while(count>=1)
    {
        std::cout<<"count is "<<count<<std::endl;
        if(count==6)
        {
            break;
            
        }
        count++;

    }
    std::cout<<"Printing stopped"<<std::endl;
}