// cpp_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

    double profit[12];
    cout << "Enter the company's profit for each month (in thousands):" << endl;

    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ": ";
        cin >> profit[i];
    }

    int start, end;

    cout << "Enter the range of months to search (1 to 12):" << endl;

    cout << "Start month: ";
    cin >> start;

    cout << "End month: ";
    cin >> end;

    if (start < 1 || start > 12 || end < 1 || end > 12 || start > end) {
        cout << "Invalid range." << endl;
        return -1;
    }

    int max_index = start - 1;
    int min_index = start - 1;

    for (int i = start; i < end; i++) {
        if (profit[i] > profit[max_index]) {
            max_index = i;
        }
        if (profit[i] < profit[min_index]) {
            min_index = i;
        }
    }

    cout << "Maximum profit is: " << max_index + 1 << endl;
    cout << "Minimum profit is: " << min_index + 1 << endl;

    return 0;
}


// In the future, to open this project again, go to File > Open > Project and select the .sln file
