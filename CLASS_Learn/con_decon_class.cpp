#include <iostream>

using namespace std;

class test
{
    public:
        int a;
        test();
        ~test();
};
test::test()
{
    cout<<"Object has been created"<<endl;
    //可以传入参数，对数据进行初始化
}
test::~test()
{
    cout<<"deleted"<<endl;
    //被释放的时候就会自动执行，整个程序关闭的时候也会执行，因为被释放了？或许有某种机制导致其在执行？
}
int main()
{
    test a;
}