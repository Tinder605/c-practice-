#include<iostream>
#include<cstring>
// #include<csdlib>

using namespace std;

class strtype{
    char *p;
    int len;
    public:
        strtype(char *ptr);
        ~strtype();
        void show();
};

strtype::strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char*)malloc(len+1);

    strcpy(p,ptr);
}

strtype::~strtype()
{
    cout << "メモリ解放" << endl;
    free(p);
}

void strtype::show()
{
    cout << p << "-長さ:" << len << endl;
}


int main()
{
    strtype s1("----");
    s1.show();
    return 0;
}