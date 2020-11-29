// U1_Sub1_TierneySalzmann.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    //Ask the user for an operator and two numbers, which will be assigned to variables num1 and num2
    cout << "Enter an operator: +, -, *, or / : \n";
    cin >> op;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;

    //Create switch case for each operator 
    switch (op)
    {
    case'+':
        cout << num1 + num2;
        break;
    
    case'-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;
    }
    return 0;
}
