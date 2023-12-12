#include<iostream>
using namespace std;

class coord{
    int x,y;
public:
    coord(){x=0; y=0;}
    coord(int i, int j){ x=i; y=j;}
    void get_xy(int &i,int &j){
        i = x;
        j = y;
    }
    coord operator*(int ob2);
};

coord coord::operator*(int ob2){
    coord temp;
    temp.x = x * ob2;
    temp.y = y * ob2;
    return temp;
}
// *thisで自身のクラスを返せる

int main(){
    int x,y;
    coord o1(10,10),o3;
    int b1 = 5;

    o3 = o1 * 5;
    o3.get_xy(x,y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}