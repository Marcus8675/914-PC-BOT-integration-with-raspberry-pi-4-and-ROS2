#include "velocity_ros_wrapper.h"


void CmdVelListener::velocity_callback(const geometry_msgs::msg::Twist& msg){
  wbr914.SetContourMode( VelocityContouringProfile );
  for(int i=0;i<=1000;i++){
  wbr914.SetVelocityInTicks(40000,40000);
  wbr914.UpdateM3();
    }
}

int main(){

  
}