#include<iostream>
using namespace std;

class base{
public:
    base() {cout << "親クラス側のコンストラクタ" << endl;}
    ~base() {cout << "親クラスのデストラクタ" << endl;}
};

class child: public base{
public:
    child(){cout << "子クラス側のコンストラクタ" << endl;}
    ~child(){cout << "子クラス側のデストラクタ" << endl;}
};

int main(){
    child ob;
    return 0;
}