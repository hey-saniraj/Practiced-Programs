#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height,width;
    char anyChar;
    cout<<"Enter Height:";
    cin >>height;
    cout<<"Enter width:";
    cin >>width;
    cout<<"Enter Charecter:";
    cin>>anyChar;

    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=width;j++)
        {
            cout<<setw(10)<<anyChar;
        }
         cout<<endl;
    }

   
    
    
}