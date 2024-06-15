/*
Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) 
*/


#include<iostream>
#include<string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void inputPlayerData(string pname, int page) {
        name = pname;
        age = page;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData(int runs, int best) {
        totalRuns = runs;
        bestPerformance = best;
    }

    void calculateAverageRuns() {
        averageRuns = totalRuns / 5.0; // Assuming 5 innings for average calculation
    }

    void displayBatsmanData() {
        cout << "Batsman Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman player;
    player.inputPlayerData("Sachin", 40);
    player.inputBatsmanData(1500, 200);
    player.calculateAverageRuns();
    player.displayBatsmanData();

    return 0;
}