#include<iostream>
using namespace std;

class A
{
    public:
            A(){
                cout << endl<< "this is parent class A.";
            }
};
class B : public A
{
    public:
            B(){
                cout << endl<< "this is child class B.";
            }
};
class C : public A
{
    public:
        C(){
            cout << endl << "this is child class C.";
        }
};
int main(){
    B b1;
    C c1;
}