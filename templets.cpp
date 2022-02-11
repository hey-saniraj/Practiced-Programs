#include<iostream>
using namespace std;

template<typename T>
void Swap( T& a ,T& b)
{
    T temp = a;
    a=b;
    b=temp;

    
     
}

int main()
{
    int a=2,b=3;
    cout<<a<<" - "<<b<<endl;
    Swap(a,b);
    cout<<a<<" - "<<b<<endl;

   char c='c',d='d';
    cout<<c<<"  -  "<<d<<endl;
    Swap(c,d);
    cout<<c<<"  -  "<<d<<endl;

    double e=10.03,f=8.03;
    cout<<e<<"  -  "<<f<<endl;
    Swap(e,f);
    cout<<e<<"  -  "<<f<<endl;
    
}