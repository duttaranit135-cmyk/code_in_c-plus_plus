#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter number:" << endl;
    cin >> num;

    if (num > 12)
    {
        cout << "valu is small" << endl;
        if (num >= 100)
        {
            cout << "value is big" << endl;
        }
    }
    return 0;
}
