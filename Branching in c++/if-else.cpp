#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter number:" << endl;
    cin >> num;
    if (num > 0)
    {
        cout << "the value is positive " << endl;
    }
    else if (num < 0)
    {
        cout << "the value is negative" << endl;
    }
    else
    {
        cout << "the value is zero" << endl;
    }
    return 0;
}
