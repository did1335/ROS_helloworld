#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "my_executable1");
    ros::NodeHandle nodeHandle;
    ros::Rate loopRate(20);

    int count=0;
    while (ros::ok())
    {
        ROS_INFO_STREAM("Hello World" << count);
        ros::spinOnce();
        loopRate.sleep();
        count++;
    }
    ros::shutdown();
    return 0;
}