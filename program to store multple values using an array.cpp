//Program to store values entered by user in 
#include<iostream>
using namespace std;
int main()
{
//variable declaration
int i,j,k;
//this array can store upto 18 elements(2*3*3)
int a[2][3][3]={{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}}};
//use of nested for loop
//access the position of the array
 for(i=0;i<2;i++)
 {
//access the rows of the aaray
 for(j=0;j<3;j++)
 {
//acess column of the array
for(k=0;k<3;k++)
{
//printing elements with their proper index
cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]="<<a[i][j][k]<<endl;
}
}
}
return 0;
}