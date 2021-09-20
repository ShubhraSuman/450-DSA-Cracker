// shortest path in string
#include <iostream>
#include <string.h>
#include <utility>

std::pair<int,int> calculateDisplacement(const std::string direction)
{
    int xAxis = 0;
    int yAxis = 0;
    for(int i=0;i<direction.length();i++)
    {
        if(direction[i]=='E')
            xAxis++;
        else if(direction[i]=='W')
            xAxis--;
        else if(direction[i]=='N')
            yAxis++;
        else if(direction[i]=='S')
            yAxis--;
    }
    return {xAxis,yAxis};
}
std::string quadCheck(int xAxis, int yAxis)
{
  std::string Displacement = "";
  //1st quadrant
  if(xAxis>0 && yAxis>0)
  {
      while(xAxis--)
      Displacement+='E';
      while(yAxis--)
      Displacement+='N';
      return Displacement;
  }
  //2nd quadrant
  if(xAxis<0 && yAxis>0)
  {
      while(xAxis++)
      Displacement+='W';
      while(yAxis--)
      Displacement+='N';
      return Displacement;
  }
  //3rd quadrant
  if(xAxis<0 && yAxis<0)
  {
      while(xAxis++)
      Displacement+='W';
      while(yAxis++)
      Displacement+='S';
      return Displacement;
  }
  //4th quadrant
  if(xAxis>0 && yAxis<0)
  {
      while(xAxis--)
      Displacement+='E';
      while(yAxis++)
      Displacement+='S';
      return Displacement;
  }
}
int main()
{
  std::string direction;
  std::cin>>direction;
  std::pair<int,int> res = calculateDisplacement(direction);
  int xAxis = res.first;
  int yAxis = res.second;
  std::cout<<xAxis<<" Displacement in xAxis"<<std::endl;
  std::cout<<yAxis<<" Displacement in yAxis"<<std::endl;
  //check for co-ordinates
  std::string Displacement = quadCheck(xAxis,yAxis);
  std::cout<<"Final Displacement : "<<Displacement<<std::endl;
  return 0;
}
