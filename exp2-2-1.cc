#include<iostream>
#include<cstring>
// #include<csdlib>

using namespace std;

class samp{
    char s[80];
    public:
        void show(){ cout << s << endl;}
        void set(char* str){ strcpy(s,str);}
};

samp input()
{
    char s[80];
    samp str;
    cout << "文字列の入力: ";
    try{
        cin >> s;
        str.set(s);
    }
    catch(Overflow){
        strcpy(s,"文字数エラー");
        str.set(s);
    }
    return str;
}

int main()
{
    samp ob;
    ob = input();
    ob.show();
    return 0;
}