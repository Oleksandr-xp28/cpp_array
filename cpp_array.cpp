// cpp_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    const int size = 6;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Profit for month " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Total profit: " << sum << endl;

    return 0;
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
