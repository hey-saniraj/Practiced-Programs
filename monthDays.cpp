#include<iostream>
using namespace std;
int main()
{
    int year,month;
    cout<<"Enter Year,Month: "<<endl;
    cin >> year >> month;
    
    switch (month)
    {
     case 2: (year % 4==0 && year % 100 !=0 || year % 400 ==0)? //ternary operator
       cout<<"29 Days Month\n":cout<<"28 Days month"<<endl;break;

    case 4:
    case 6:
    case 9:
    case 11: cout <<"30 Days Month\n"; break;
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:cout <<"31 Days Month\n"; break;
     default:cout <<"Invalid information!!\n"; break;
     
    }

}