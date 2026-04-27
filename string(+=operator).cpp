#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "hello";
    string str2 = "world";

    str1 += str2;   // using += operator to join strings

    cout << str1 << endl;

    return 0;
    }
