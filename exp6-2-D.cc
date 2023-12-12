#include<iostream>
using namespace std;

class coord{
    int x,y;
public:
    coord(){x = 0; y = 0;}
    coord(int i, int j){ x = i; y = j;}
    void get_xy(int &i,int &j){ i= x; j = y;}
    friend coord operator*(int ob1, coord ob2);
};
// フレンド関数にしたいことでクラスに依存していないopearatorになった
// return-type クラス名前（依存する） operator 演算子 (引数)
coord operator *(int ob1, coord ob2){
    coord temp;
    temp.x = ob1 * ob2.x;
    temp.y = ob1 * ob2.y;
    return temp;
}

int main(){
    int x,y;
    coord o2(10,10),o3;
    o3 = 3 * o2;
    o3.get_xy(x,y);
    cout << x << endl;
    cout << y << endl;
}