// cpp_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    int M;
    cout << "Enter the size of the array: ";
    cin >> M;
    double* arr = new double[M]; // Покажчик
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < M; i++) cin >> arr[i];

    double sumNeg = 0;
    double prodEven = 1;
    int firstNeg = -1, lastNeg = -1;
    for (int i = 0; i < M; i++) {
        if (arr[i] < 0) {
            sumNeg += arr[i];
            if (firstNeg == -1) firstNeg = i;
            lastNeg = i;
        }
        if (i % 2 == 0) prodEven *= arr[i];
    }

    double sumBetweenNeg = 0;
    if (firstNeg != -1 && lastNeg != -1)
        for (int i = firstNeg + 1; i < lastNeg; i++)
            sumBetweenNeg += arr[i];

    cout << "sum neg: " << sumNeg << endl;
    cout << "prod even: " << prodEven << endl;
    cout << "sum between neg: " << sumBetweenNeg << endl;

    delete[] arr; // deallocate the memory
    return 0;
}




// In the future, to open this project again, go to File > Open > Project and select the .sln file
