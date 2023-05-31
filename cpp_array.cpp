// cpp_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
