// cpp_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int max;
    const int size = 12;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Profit for month " << i + 1 << ": ";
        cin >> arr[i];
        if (i == 0 || arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Max: " << max << endl;

    return 0;
}

// In the future, to open this project again, go to File > Open > Project and select the .sln file
