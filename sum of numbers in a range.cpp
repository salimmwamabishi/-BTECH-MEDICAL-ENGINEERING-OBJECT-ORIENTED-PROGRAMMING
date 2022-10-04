//program to print sum of numbers in a range
#include<iostream>
using namespace std;
int main()
{
 int i,r,s,sum=0;
 cout<<"Enter the starting point"<<endl;
 cin>>r;
 cout<<"Enter the ending point"<<endl;
 cin>>s;
 for(i=r;i<=s;i++)
 {
 cout<<i<<" ";
 sum=sum+i;
 }
 cout<<"The sum of number from "<<r <<" and "<<s <<" is ="<<sum;
 return 0;
}