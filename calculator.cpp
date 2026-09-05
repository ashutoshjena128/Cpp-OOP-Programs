#include <iostream>
using namespace std;

int main()
{
    double a, b, result;
    char op;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        result = a + b;
        cout << "Result: " << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "Result: " << result << endl;
        break;
    case '*':
        result = a * b;
        cout << "Result: " << result << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        else
        {
            result = a / b;
            cout << "Result: " << result << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator." << endl;
    }

}