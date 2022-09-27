//programe to check avarage grade
#include<iostream>
using namespace std;
int main()
{
 int Maths,Eng,French,Sci,CRE,avg;
 cout<<"Enter marks for 5 units"<<endl;
 cout<<"Maths"<<endl;
 cin>>Maths;
 cout<<"Eng"<<endl;
 cin>>Eng;
 cout<<"French"<<endl;
 cin>>French;
 cout<<"Sci"<<endl;
 cin>>Sci;
 cout<<"CRE"<<endl;
 cin>>CRE;
 avg=(Maths+Eng+French+Sci+CRE)/5;
 if(avg>=70&&avg<=100)
 {
  cout<<"\n avg"<<avg<<endl;
  cout<<"grade A"<<endl;
 }
 else if(avg>=60&&avg<=69)
 {
  cout<<"\n avg"<<avg<<endl;
  cout<<"grade B"<<endl;
 }
 else if(avg>=50&&avg<=59)
 {
  cout<<"\n avg"<<avg<<endl;
  cout<<"grade C"<<endl;
 }
 else if (avg>=40&&avg<=49)
 {
  cout<<"\n avg"<<avg<<endl;
  cout<<"grade D"<<endl;
 }
 else if(avg<40)
 {
  cout<<"\n avg"<<avg<<endl;
  cout<<"grade E"<<endl;
 }
 return 0;
}