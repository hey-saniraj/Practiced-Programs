#include <iostream>
using namespace std;

void swap(int &num1, int &num2)
{
    int t = num1;
    num1 = num2;
    num2 = t;
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout << "a: " << a << endl
         << "b: " << b;
}