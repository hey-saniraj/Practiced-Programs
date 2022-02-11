#include<iostream>
using namespace std;

void introduceMe(string name,string city,int age)
{
    cout<<"I am "<<name<<"."<<endl;
    cout<<"I am from "<<city<<"."<<endl;
    cout<<"I am "<<age<<" years old."<<endl;

}


int main()
{
    //introduceMe("Anna","NY",26);
    for(int i=1;i<=3;i++)
    {
      string name1,city1;
      int age;

      cout<<"Enter Name: ";
      cin>>name1;

      cout<<"ENter City: ";
      cin>>city1;

      cout<<"Enter Age: ";
      cin>>age;

      introduceMe(name1,city1,age);

    }

    


}