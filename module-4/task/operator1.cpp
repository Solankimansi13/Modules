#include<iostream>
using namespace std;
class Operate{
public:
    Operate()
    {
          int n;
    cout << "enter number = ";
    cin >>n;
    }
      Operate operator --()
    {
        --n;
    }
    
  
};
int main()
{
    Operate opt;
    --opt;
    cout<<endl<<"After dicrement value of the n is: "<< opt.show();
}