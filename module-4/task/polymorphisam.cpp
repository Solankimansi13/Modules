#include<iostream>
using namespace std;
class A{
public:
    int add(int no1, int no2)
    {return no1+no2;}
    int add(int no1, int no2, int no3)
    {return no1+no2+no3;}
};
int main()
{
    A a1;
    cout<<endl<<a1.add(23, 45);
    cout<<endl<<a1.add(45, 67, 89);
    return 0;
}