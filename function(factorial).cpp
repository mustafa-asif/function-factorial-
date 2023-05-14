#include <iostream>
using namespace std;
int factorial(int);
// 4! = 1*2*3*4 = 24
int main()
{
    int a;
    int fact = 1;
    cout << "enter number to find factorial" << endl;
    cin >> a;
    cout << a << "! = ";
    for (int i = 1;i <= a;i++)
    {
        if (i == a)
        {
            cout << i;
            break;
        }
        cout << i << "*";
    }

    cout << " = " << factorial(a) << endl;

}
int factorial(int a)
{
    int fact = 1;
    for (int i = a; i > 0; i--)
    {
        fact *= i;
    }
    return fact;

}