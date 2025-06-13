//Ask the user to enter 5 integers into an array then calculate and print the sum of all numbers, find and print the maximum number.
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0, max;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Max = " << max << endl;

    return 0;
}
