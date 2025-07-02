#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int target;
    cin >> target;

    int countVal = count(arr, arr + n, target);
    cout << "Count: " << countVal << endl;

    int minVal = *min_element(arr, arr + n);
    int maxVal = *max_element(arr, arr + n);

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}
