#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    string word;
    deque<char> d;
    bool isPalindrome = true;

    cout << "Enter a word: ";
    cin >> word;

    for (char c : word)
        d.push_back(c);

    while (d.size() > 1) {
        if (d.front() != d.back()) {
            isPalindrome = false;
            break;
        }
        d.pop_front();
        d.pop_back();
    }

    if (isPalindrome)
        cout << "It is a palindrome.\n";
    else
        cout << "It is not a palindrome.";
}
