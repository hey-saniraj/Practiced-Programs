//to check if a number is a power of two
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    int ans=1;
    cout << "Enter number: ";
    cin >> number;

    for (int i = 0; i <= 30; i++)
    {
       // int ans = pow(2, i); //calculated every single power of two in int ranger and compare with given number

        if (ans == number)
        {
            cout << "yes";
            return 0;
        }
           if(ans < INT32_MAX/2)
            ans = ans * 2;
    }
    cout << "No";
}