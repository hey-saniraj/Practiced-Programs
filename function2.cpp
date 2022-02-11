#include<iostream>
using namespace std;
 
int add(int num1,int num2)
{
  int n3;

  n3=num1+num2;
  cout<<"Addition: "<<n3<<endl;
  

}

int main()
{
  int num1,num2;
  cout<<"Enter Num1: ";
  cin>>num1;

  cout<<"Enter Num2: ";
  cin>>num2;

  add(num1,num2);



}