#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    ++a;
    // pre-increment(1+a=value1)
    cout << "value of pre-increment:" << a << endl;
    a++;
    // post-increment(value1+1=value2)
    cout << "value of post-increment:" << a << endl;
    --a;
    // pre-decrement(1-value2=value3)
    cout << "value of pre-decrement:" << a << endl;
    a--;
    // post-decrement(value3-1=value4/a)
    cout << "value of post-decrement:" << a << endl;
    return 0;
}
