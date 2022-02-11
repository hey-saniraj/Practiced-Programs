#include<iostream>
using namespace std;

void showMenu()
{
    cout<<"*******MENU*********"<<endl;
    cout<<"1.check Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.withdraw"<<endl;
    cout<<"4.Eit"<<endl;
    cout<<"*********************"<<endl;
}
int main()
{
     int accountNumber1=987,accountNumber2=654,accountNumber;
     cout<<"Account number: ";
     cin>>accountNumber;
     if(accountNumber==accountNumber1)
     {
       

    showMenu();
    int option;
    double balance1=500;

    do{
           
    cout<<"Option: ";
    cin>>option;
    //system("cls");

    switch ((option))
    {
    case 1: cout<<"The balance is "<<balance1<<"$"<<endl; 
        break;

    case 2:cout<<"Deposit amount: ";
             double depositAmount;
             cin>>depositAmount;
             balance1+=depositAmount;
        break;

    case 3:cout<<"Withdraw amount: ";
            double withdrawAmount;
            cin>>withdrawAmount; 
            if(withdrawAmount<=balance1)
                 balance1-=withdrawAmount;
            else
                 cout<<"Not enough balance!!"<<endl;  
        break;               

    
     
    }

    }while(option!=4);
     

     }

     else if(accountNumber==accountNumber2)
     {
         {


    showMenu();
    int option;
    double balance2=500;

    do{
           
    cout<<"Option: ";
    cin>>option;
    //system("cls");

    switch ((option))
    {
    case 1: cout<<"The balance is "<<balance2<<"$"<<endl; 
        break;

    case 2:cout<<"Deposit amount: ";
             double depositAmount;
             cin>>depositAmount;
             balance2+=depositAmount;
        break;

    case 3:cout<<"Withdraw amount: ";
            double withdrawAmount;
            cin>>withdrawAmount; 
            if(withdrawAmount<=balance2)
                 balance2-=withdrawAmount;
            else
                 cout<<"Not enough balance!!"<<endl;  
        break;               

    
     
    }

    }while(option!=4);
     

     }
     }
     else
     cout<<"Enter valid Account number!!"<<endl;


}