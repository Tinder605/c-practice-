#include<iostream>
using namespace std;

class myclass{
    int a,b;
    public:
        void set(int i,int j){ a = i;b = j;}
        void show() {cout << a << " " << b <<endl;}

};

int main(){
    myclass o1,*o2;
    o1.set(19,3);
    o2 = &o1;
    o1.show();
    o2->show();
    o1.set(10,4);
    o2->show();
    return 0;
};