//program to display sum of numners in a range
#include <iostream>
using namespace std;
int main()
{
 int a,b,sum=0;
 cout<<"Enter the starting point"<<endl;
 cin>>a;
 cout<<"Enter the ending point"<<endl;
 cin>>b;
 while(a<=b)
 {
  sum+=a;
  a++;
}
cout<<"The sum of numbers from a to b is "<<sum<<endl;
return 0;
}