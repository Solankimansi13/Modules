#include<iostream>
using namespace std;
template <class T>
T div(T a, T b)
{
    return a/b;
}
int main()
{
    cout<<endl<<"Value of the division is : "<<div <int> (34, 5);
    cout<<endl<<"Value of the division is : "<<div <float> (34, 5);
}