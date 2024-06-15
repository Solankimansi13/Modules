#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("../temp.txt");
    out<<"Hello-World";
    out.close();
    ifstream in("../temp.txt");
    in>>str;
    cout<<str;
    in.close();
}