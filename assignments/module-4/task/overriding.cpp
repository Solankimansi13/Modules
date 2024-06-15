#include<iostream>
using namespace std;
class A
{
public:
    int sum(int no1, int no2){
        return no1 + no2;
    }
    int sum(int no1, int no2, int no3)
    {
        return no1 + no2;
    }
};
class B
{
public:
     int sum(int no1, int no2){
        return no1 + no2;
    }
    int sum(int no1, int no2, int no3)
    {
        return no1 + no2;
    }
};

int main()
{ 
    A a1;
    cout<<endl<<a1.sum(20, 40);
    cout<<endl<<a1.sum(45, 67, 23);
    B b1;
    cout<<endl<<b1.sum(23, 40);
    cout<<endl<<b1.sum(45, 67, 34);
    return 0;
}