//programe to check voter eligibilty
#include<iostream>
using namespace std;
int main ()
{
 int age;
 cout<<"Enter your age"<<endl;
 cin>>age;
 if(age>=18)
{
 cout<<"you are eligible to vote."<<endl;
}
else
{
 cout<<"you are not eligible to vote."<<endl;
}
return 0;
}