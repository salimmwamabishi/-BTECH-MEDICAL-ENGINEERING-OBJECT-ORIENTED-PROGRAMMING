//program to calculate net bonus
#include<iostream>
using namespace std;
int main()
{
int p, salary,years_of_experience,bonus;
cout<<"calculate bonus"<<endl;
cout<<"Enter salary"<<endl;
cin>>salary;
cout<<"Enter years_of_experience"<<endl;
cin>>years_of_experience;
bonus=(salary*p/100);
if(years_of_experience>10)
{
 bonus=(salary*10/100);
cout<<"\n bonus is "<<bonus<<endl;
}
else if (years_of_experience>=6&&years_of_experience<=10)
{
 bonus=(salary*8/100);
 cout<<"\n bonus is "<<bonus<<endl;
}
 else if(years_of_experience<6)
{
bonus=(salary*5/100);
cout<<"\n bonus is "<<bonus<<endl;
bonus=(salary*5/100);
}
 return 0;
}
