#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "...Program To Check Whether A Number Is Even Or Odd..." << endl;
    cout << "\nEnter A Number: ";
    cin >>x;
    x = x % 2;
    if (x == 0) {
        cout << "\nIt's An Even Number" << endl;
    }else {
        cout << "\nIt's An Odd Number" << endl;
    }
    return 0;
}
