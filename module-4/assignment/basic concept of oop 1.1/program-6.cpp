/*
Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables. 
*/

#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setName(const std::string& newName) {
        name = newName;
    }

    string getName() {
        return name;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    int getAge() {
        return age;
    }

    void setCountry(const std::string& newCountry) {
        country = newCountry;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    Person person;

    person.setName("mansi");
    person.setAge(22);
    person.setCountry("india");

    cout << "Person Name: " << person.getName() << endl;
    cout << "Person Age: " << person.getAge() << endl;
    cout << "Person Country: " << person.getCountry() << endl;

    return 0;
}