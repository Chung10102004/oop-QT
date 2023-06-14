#include <iostream>
using namespace std;

class A
{
    public:

};
class B: public A
{
    public:
    int test()
    {
        cout << "aaaaa";
        return 0; 
    }
};

int main()
{
    A *ds[2];
    ds[0] = new B;
    ds[0]->test();
    return 0;
}