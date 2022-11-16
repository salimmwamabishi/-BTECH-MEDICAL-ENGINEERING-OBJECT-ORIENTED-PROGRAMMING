// programe to demonstrate single inherintance
#include<iostream>
using namespace std;
//creats base class
class father{
public:
void mansion()//member function
{
//display the text below
cout<<"may mansion"<<endl;
}
};
//creates derived
class son:public father
{
public:
void motorbike()//member function
{
//display the text below
cout<<"my motorbike"<<endl;
}
};
int main()
{
//creates object of the son class
son son1;
//calling members of base class
son1.mansion();
//calling member of the derive class
son1.motorbike();
return 0;
}