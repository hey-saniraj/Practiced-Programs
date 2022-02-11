#include<iostream>
using namespace std;

// int getMin(int number[],int size)
// {
//    int min=number[0];
//    for(int i=0;i<5;i++)
//    {
//        if(number[i]<min)
//        min=number[i];
//    }
//    return min;

// }


// int getMaX(int number[],int size)
// {
//    int  maX=number[0];
//    for(int i=0;i<5;i++)
//    {
//        if(number[i]>maX)
//        maX=number[i];
//    }
//    return maX;

// }

void getminandgetMaX(int number[],int size,int* min,int* maX)//to get multiple return values from function using pointers
{
    for(int i=0;i<5;i++)
   {
       if(number[i]<*min)
      *min=number[i];
   }
   for(int i=0;i<5;i++)
   {
       if(number[i]>*maX)
      *maX=number[i];
   }
}
int main()
{
    int numbers[5]={11,3,-5,7,9};
    int min=numbers[0],maX=numbers[0];

    // cout<<"Min: "<<getMin(numbers,5)<<endl;
    // cout<<"MaX: "<<getMaX(numbers,5)<<endl;
     
     getminandgetMaX(numbers,5,&min,&maX);
     cout<<"Min: "<<min<<endl;
     cout<<"MaX: "<<maX<<endl;


}