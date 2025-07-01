#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int num;

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; ++i) {
        cin >> num;
        s.push(num);
    }

    cout << "Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}
