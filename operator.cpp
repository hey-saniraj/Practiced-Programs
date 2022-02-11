#include<iostream>
using namespace std;

int main()
{
    //+,-,*,/,%  ----->Binary Operator
    cout << 5 + 2 << endl;
    cout << 5 - 2.0 << endl;
    cout << -7 / -2.0<< endl;
    cout << -10 % 3<< endl;

    //++,-- ------>Uninary Operator
    int counter=7;
    counter++;
    cout<< counter <<endl;
    counter--;
    cout<< counter<<endl;

    int counter2=7;
    cout<< counter2++<<endl; //post increment
    cout<<--counter2<<endl;// pre decrement
    
    //<,>,<=,>=,==,!=  -----> relation operator

    int a=5,b=5;
    cout<< (a>b) <<endl;
    cout<< (a<b) <<endl;
    cout<< (a<=b) <<endl;
    cout<< (a!=b) <<endl;

    // &&,||,! -----> logical operators

    cout<< (a==5 && b==5)<<endl;
    cout<< (a==5 || b==6)<<endl;
    cout<< (a==5 && b==4+1)<<endl;
    cout<< !(a==5 && b==4+1)<<endl;

    // =,+=,-=,*=,/=,%= ------> assignment operator

    int X=5;
    X += 7;
    //X = X +7;
    cout<< X<<endl;


}
