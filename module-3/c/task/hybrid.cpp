#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << " this is constructor A. "<< endl;
    }
};
class B : virtual public A
{
protected:
    B()
    {
        cout << " This is sub Constructor B."<<endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "this is sub Constructor C."<<endl;
    }
};
class D : public B
{
public:
    D()
    {
        cout << "this is sub constructor D." <<endl;
    }
};
int main()
{
    D D1;
    C C1;
}