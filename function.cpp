#include<iostream>
using namespace std;

void function();//function declaration

int main()
{
    cout<<"Hello from main()"<<endl;
     function();//function call
}


void function()//function definition
{
    cout<<"Hello from function()"<<endl;
}
