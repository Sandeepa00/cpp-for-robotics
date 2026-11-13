# include <iostream>

int main()
{
    int lidar = 100;
    int camera = 75;

    int* lidarSensor = &lidar;
    int* cameraSensor= nullptr;

    if (lidarSensor != nullptr)
    {
     
        std::cout<<"lidarsensor is connected!"<<std::endl;
        std::cout<<"lidar reading : "<<lidar<<std::endl;

    }
    else
    {
        std::cout<<"lidarsensor is not connected!"<<std::endl;

    }
    cameraSensor = &camera;

    if (cameraSensor != nullptr)
    {
        std::cout<<"lidar camera reading : "<<camera<<std::endl;

    }
    else
    {
        std::cout<<"cameraSensor is not connected!"<<std::endl;

    }
return 0;
}