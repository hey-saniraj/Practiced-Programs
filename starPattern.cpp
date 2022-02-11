#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=1;i<=n;i++)
    { 
     
        for( j=n;j>=i;j--)
        {
           cout<<"*"<<" ";
        } 
    
      cout<<endl;
    }
}