#include <iostream>
using namespace std;


class sample{
    public:
    double length;
    double breadth;
    double height;
    void print();
    sample(int i,int b,int c);
};
void sample::print()
{
    cout<<length*breadth*height<<endl;
}
sample::sample(int i=2,int b=2,int c=2)
{
    length=i;
    breadth=b;
    height=c;
    cout<<"create success"<<endl;
}

int main()
{
    sample A;
    A.print();
}

