#include<iostream>
using namespace std;

class coord{
    int x,y;
public:
    coord(){x=0;y=0;}
    coord(int i,int j){x=i; y=j;}
    void get_xy(int &i, int &j){
        i=x;
        j=y;
    }
    coord operator+(coord ob2);
};

coord coord::operator+(coord ob2){
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
}

int main(){
    int x,y;
    coord o1(10,10),o2(5,3),o3;
    // 演算子の前の値のクラスの演算子の定義を利用している．
    o3 = o1 + o2;
    o3.get_xy(x,y);

    cout << x << endl;
    cout << y << endl;
    
}