// cpp_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    srand(time(0));

    int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() * 10;
    }

    cout << "The array is: ";

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The minimum element is: " << min << endl;
    cout << "The maximum element is: " << max << endl;

    system("pause");

    return 0;
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
