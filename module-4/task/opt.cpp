#include<iostream>
class A {
public:
    int n;
    int set()
   {
    cout << "enter a number= ";
    cin>> n;
   }
    
    Operate operator --()
    {
        --n;
    }
    void show()
    {
        cout<<"VALUE OF THE N IS: "<< n;
    }
};
int main() {
    A a1;
    a1.set();
    a1.show();
    --a1;
    a1.show();
    return 0;
}