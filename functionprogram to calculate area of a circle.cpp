//program to calculate area of circle using function
#include<iostream>
using namespace std;
float circle(int r);//function prototype
int main()
{
 int radius;
 cout<<"Enter radius"<<endl;
 cin>>radius;
float Area= circle (radius);//function calling
 cout<<"The Area of a circle is "<<Area<<endl;
 return 0;
}
 float circle (int r)
 {//function definition
 float Area;
  Area=(3.142*r*r);
 return Area;
 }