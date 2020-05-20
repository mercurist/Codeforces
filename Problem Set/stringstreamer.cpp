#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    // integer to string
    // int x;
    // cin >> x;
    // stringstream sso;
    // sso << x;
    // string strInput;
    // sso >> strInput;
    // cout << strInput << '\n';

    string number = "44";
    stringstream sso;
    sso << number;
    int num;
    sso >> num;
    cout << "integer number is " << num + 2 << '\n';
    cout << "original string is " << number + "2" << '\n';
    return 0;
}