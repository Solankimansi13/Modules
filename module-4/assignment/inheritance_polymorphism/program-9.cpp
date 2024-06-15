/*
9. Write a Program of Two 1D Matrix Addition using Operator Overloading 
*/

#include<iostream>
using namespace std;
class Matrix {
private:
    int size;
    int *matrix;

public:
    Matrix(int s) : size(s) {
        matrix = new int[size];
    }

    ~Matrix() {
        delete[] matrix;
    }

    void fillMatrix() {
        cout << "Enter " << size << " elements for the matrix:\n";
        for (int i = 0; i < size; i++) {
            cin >> matrix[i];
        }
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.matrix[i] = matrix[i] + other.matrix[i];
        }
        return result;
    }

    void displayMatrix() {
        cout << "Resultant Matrix:\n";
        for (int i = 0; i < size; i++) {
            cout << matrix[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrixA(size);
    Matrix matrixB(size);

    cout << "Fill in values for the first matrix:\n";
    matrixA.fillMatrix();

    cout << "Fill in values for the second matrix:\n";
    matrixB.fillMatrix();

    Matrix result = matrixA + matrixB;
    result.displayMatrix();

    return 0;
}