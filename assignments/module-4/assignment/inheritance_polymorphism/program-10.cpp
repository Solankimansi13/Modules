/*
10.Write a program to concatenate the two strings using Operator Overloading 
*/

#include<iostream>
#include<cstring>
using namespace std;
class StringConcatenation {
private:
    char *str;

public:
    StringConcatenation(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    StringConcatenation operator+(const StringConcatenation& other) {
        char *newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        return StringConcatenation(newStr);
    }

    void display() {
        cout << "Concatenated String: " << str << std::endl;
    }

    ~StringConcatenation() {
        delete[] str;
    }
};

int main() {
    StringConcatenation str1("Hello, ");
    StringConcatenation str2("World!");

    StringConcatenation result = str1 + str2;
    result.display();

    return 0;
}