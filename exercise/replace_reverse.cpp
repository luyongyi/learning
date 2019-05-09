#include <iostream>
#include <cctype>

using namespace std;
#define TRUE 1
class func
{
public:
    string s1;
    func();
    ~func();
    void replace();
    void deleted();
    void reverse();
};

func::func(void)
{
    getline(cin, s1);
    replace();
}

func::~func()
{
    cout << s1 << endl;
}

void func::replace()
{
    for (auto &c : s1)
        if (!(isalnum(c)))
            c = ' ';
}

void func::deleted()
{
    int a=0;
}

int main()
{
    func a;
}