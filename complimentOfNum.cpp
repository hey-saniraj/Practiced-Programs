#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int number = n;

  int binaryComp = 0;

   if (n == 0)  //edge case
    {
        cout << "Compliment of " << number << ": " << 1;
        return 0;
    }
  
  int i=0,j=0;
  while(n!=0)               //in this loop we are converting decimal to binary by each bit an 
  {                           //and if a bit is 0 changes to 1 and vice versa
      int digit = (n&1);
      if(digit == 1)  
      {
        digit = 0;
      }
      else
      {
        digit = 1;
      }

      binaryComp = (digit * pow(10,i)) + binaryComp;  //the binary complimentary number is 
      i++;                                             //saved here
      n=n>>1;

  }
   //cout<<binaryComp;

  int decimalComp = 0;

  while(binaryComp != 0)             //in this loop we are converting binary number to decimal
  {
    int digit = binaryComp % 10;

    decimalComp = digit * pow(2,j) + decimalComp;
    j++;
    binaryComp = binaryComp/10;
    
  }

  cout<<"Compliment of "<<number<<": "<<decimalComp;

}

// ** There is another way to solve this problem **
// {
//   int n;  //5--->0101
//   cout<<"Enter n: ";
//   cin>>n;
//   int m=n;
  
//   int ans;
//   int mask=0;//00....0000

//   if(n == 0) //edge case
//   {
//     cout<<0;
//   }

//   while(n!=0)   //n=5; n=2; n=1;
//   {
//     mask=(mask<<1) | 1;//(00..0000<<1) | 1 --->00..0001; (0001<<1) | 1--->0011; 0011<<1-->0111
//     n = n>>1;//010; 01: 0

//   }

//   ans = (~m) & mask;//(~m)=111...1010 & 00....0111--->000...0010
//   cout<<ans;//2


// }

