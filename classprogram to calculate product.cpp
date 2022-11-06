//program to output product of intergers
#include<iostream>
using namespace std;
//creates class
class addition{
//variable declaration
public:
int num1,num2,num3;
int calculateproduct(){//member function
return(num1*num2*num3);
}
};
int main(){
//create object of the addition class
addition addition1;
//assign values to data members
addition1.num1=22;
addition1.num2=30;
addition1.num3=50;
//calculate and display the product of the three numbers
cout<<"product of three intergers is:"<<addition1.calculateproduct()<<endl;
return 0;
}