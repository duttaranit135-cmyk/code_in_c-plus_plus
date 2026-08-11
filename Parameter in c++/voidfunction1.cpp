#include <iostream>
#include <string>
using namespace std;

void myfunction(string country = "india")
// void functionname(parameter1,parameter2,parameter3..)
{
    cout << country << "\n";
}

int main()
{
    myfunction("england");
    myfunction("usa");
    myfunction();
    myfunction("norway");

    return 0;
}
