#include<iostream>
using namespace std;
int main()
{
    int s,n,i,j;
    cout<<"Enter no of rows:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(s=i;s<=n;s++)
        {
            cout<<" ";
        }

        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
            
        }

        cout<<endl;
    }
}