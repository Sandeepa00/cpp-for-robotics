# include <iostream>

int main()
{
    int battery = 70;
    bool obstacle =false;

    if(battery>20 && !obstacle)
    {
        std::cout<<"Patrol Started"<<std::endl;
    
        for (int checkpoint =1;checkpoint<=10;checkpoint++)
         {
             std::cout<<"Moving to Checkpoint "<< checkpoint<<std::endl;
             if(checkpoint==5)
             {
                std::cout<<"Obstacle scan"<<std::endl;
             }
         }
    }

    else
    {
        std::cout<<" Patrol cancelled"<<std::endl;
    }
    return 0;
}