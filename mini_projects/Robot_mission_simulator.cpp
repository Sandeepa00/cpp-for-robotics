# include <iostream>

int main()
{
    int battery = 60;
    bool obstacle =false;

    if(battery>20 && !obstacle)
    {
        std::cout<<"Mission Started"<<std::endl;
    
        for (int checkpoint =1;checkpoint<=5;checkpoint++)
         {
             std::cout<<"Moving to Checkpoint "<< checkpoint<<std::endl;
         }
    }

    else
    {
        std::cout<<" Mission cancelled"<<std::endl;
    }
    return 0;
}