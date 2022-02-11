#include<iostream>
using namespace std;

int main()
{

    int a =5,b=4;
    cout << a+ (b++)<< endl;
    cout << (--a)+ b<< endl;
    
    
    cout << !(true && false) << endl;
    cout << (true && false || true) << endl;

    
    int X= 7;
    cout<< (++X <=9 && X+2 >= 10)<< endl;
    
    int y= 3;
    cout<< (y==y++)<< endl;

    float z =8;
    z+=2;
    cout<< z<<endl;
    z/=2;
    cout<<z<< endl;

}