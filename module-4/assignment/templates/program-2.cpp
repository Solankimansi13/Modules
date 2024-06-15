/*
2. Write a program of to sort the array using templates 
*/

#include<iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {4, 2, 1, 5, 3};
    double doubleArr[] = {4.2, 2.1, 1.5, 5.3, 3.4};
    char charArr[] = {'d', 'b', 'a', 'e', 'c'};
    int size = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Before sorting:\n";
    displayArray(intArr, size);
    sortArray(intArr, size);
    cout << "After sorting:\n";
    displayArray(intArr, size);

    cout << "Before sorting:\n";
    displayArray(doubleArr, size);
    sortArray(doubleArr, size);
    cout << "After sorting:\n";
    displayArray(doubleArr, size);

    cout << "Before sorting:\n";
    displayArray(charArr, size);
    sortArray(charArr, size);
    cout << "After sorting:\n";
    displayArray(charArr, size);

    return 0;
}