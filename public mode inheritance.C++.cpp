#include <iostream>
using namespace std;
class box
{
    private:
    int x;
    protected:
    int y;
    public:
    int z;
    void.getX()
    {
        x=50;
    }
};
class square : public box
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void.getYAB()
    {
        y=100;
        a=200;
        b=300;
    }
};
int main()
{
    box b1;
    square s1;
    s1.a = 10;
    s1.z = 20;
    s1.getX();
    s1.getYAB();
    cout<<c<<endl;
    cout<<z<<endl;
}