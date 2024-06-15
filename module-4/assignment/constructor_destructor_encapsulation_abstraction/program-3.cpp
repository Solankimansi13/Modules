/*
Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables. 
*/

#include<iostream>
#include<string>
using namespace std;
class Car {
private:
    string company;
  string model;
    int year;

public:
    void setCompany(const string& c) {
        company = c;
    }

    string getCompany() {
        return company;
    }

    void setModel(const string& m) {
        model = m;
    }

    string getModel() {
        return model;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.setCompany("Toyota");
    myCar.setModel("Corolla");
    myCar.setYear(2022);

    cout << "Car Company: " << myCar.getCompany() << endl;
    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;

    return 0;
}