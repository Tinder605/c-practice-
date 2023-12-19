#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << hex << 100 <<endl;
    cout << oct << 100 << endl;
    cout << setfill('X') << setw(10);
    cout << 100 << " hi " << endl;

    return 0;
}