//program to convert fahrenheit to degree celsius
#include<iostream>
using namespace std;
float calculation(int F);//function prototype
int main()
{
int Fahrenheit;
cout<<"Enter Fahrenheit"<<endl;
cin>>Fahrenheit;
float celsius=calculation(Fahrenheit);//function calling
cout<<"The convertion is:"<<celsius<<" degree celsius."<<endl;
return 0;
}
float calculation(int F)
{
 //function definition
 float celsius;
celsius=0.555555555*(F-32);
 return celsius;
}