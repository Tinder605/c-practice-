#include<iostream>
using namespace std;

// メイン関数
int main()
{
    int i;
    float f;
    char s[80];

    cout << "整数値, 浮動小数点, 文字列入力: ";
    cin >> i >> f >> s;
    cout << "入力した値： ";
    cout << i << ' ' << f << ' ' << s << endl;
    
    return 0;
}
