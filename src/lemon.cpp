#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "lemon");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");


  int Count = 0;


  Count = 1;


  if(Count==1)
  {

     std::cout << "massage : " << Count << std::endl;

  }

}
