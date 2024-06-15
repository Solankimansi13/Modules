#include<iostream>
using namespace std;
class Operate{
public:
    int n;
    int get (int no) { n = no; }
    int show() { return n; }
    Operate operator ++()
    {
        ++n;
    }
};
int main()
{
    Operate opt;
    opt.get(34);
    cout<<endl<<"Value of the n is: "<< opt.show();
    ++opt;
    cout<<endl<<"After increment value of the n is: "<< opt.show();
}