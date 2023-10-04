#include <iostream>
using namespace std;
void factorial(int number)
{
    int fact = 1;
    for (int i = number; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << "factorial of " << number << "is " << fact << endl;
}

int main()
{
    int number;
    cout << "enter number=";
    cin >> number;
    factorial(number);
}