#include <iostream>
using namespace std;
// pointer is a variable that stores/points the address of another variable.(what is pointer?)

int main()
{
    int num = 10;  // num is pointer/variable.
    int *p = &num; // p is another variable.
    //[*:dereference operator.]
    //[&:address of operator.]

    cout << "address of number:" << p << endl;
    cout << "value pointed to by p(*p):" << *p << endl;

    *p = 20;
    cout << "new value of number after modifying via pointre:" << num << endl;
    return 0;
}
