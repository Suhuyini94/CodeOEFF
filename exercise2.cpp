/*Write a program that prompts the user to input a number. The program
should then output the number and a message saying whether the number is
positive, negative, or zero.*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number!" << endl;
    cin >> x;
    while (x == 0)
    {
        cout << "The numeber you entered is zero" << endl;
        return 0;
    }
    if (x > 0)
    {
        cout << "The number you entered is positive" << endl;
    }
    else
    {
        cout << "The number you entered is negative" << endl;
    }
    return 0;
}
