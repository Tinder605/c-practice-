#include<iostream>
using namespace std;

int main(){
    cout.width(10);
    cout << "hello" << endl;
    cout.fill('%');
    cout.width(10);
    cout << "hello" << endl;
    cout.setf(ios::left);
    cout.width(10);
    cout << "hello" << endl;

    cout.width(10);
    cout.precision(10);
    cout << 123.456789 << endl;
    cout.fill(' ');
    cout.width(10);
    cout.precision(6);
    cout << 123.456789 << endl;

    return 0;
}