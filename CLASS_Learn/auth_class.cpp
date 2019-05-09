#include <iostream>

using namespace std;

class box
{
    public:             //都可以使用的数据
        double length;
        double height;
        double breadth;
        double test();
    private:        // 仅在基类（或特定条件）使用的数据
        double area=49.0;
    //protected:  想保护起来，又能让派生类访问的一个折中方案
    
};

int main()
{
    box a;
    a.length = 5.0;
    a.height = 5.0;
    a.breadth = 5.0;
    //a.area = 5.0 ; 编译器会提示inaccessable
    double *p=&a.length;
    for(int i=0;i<=3;i++)
        cout<<*(p+i)<<endl;
    *(p+3)=10;
    /*
    指针还是能读取和修改private变量，说明了private变量仅仅只是受到编译器的保护
    并没有在内存中特别标记
    C++这个举措只是方便面向对象的思维开发而在编译器使用这一“技巧”
    */
    cout <<sizeof(a)<<endl;
}