#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "enter operator(+, -, *, /) : ";
    cin >> op;
    cout << "enter frist opparant:";
    cin >> num1;
    cout << "enter secound opparant:";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
    default:
        cout << "error!,oparator is not correct";
    }

    return 0;
}
