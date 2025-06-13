//Write a program to find the radius of a circle.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float r, pi, area;
    pi = 3.14;
    cin >> area;
    r = sqrt(area/pi);
    cout << r;

    return 0;
}


//Print number from 1 to n.
#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a day: ";
    cin >> a;
    switch(a) {
        case 1:
        cout << "monday";
        break;
        case 2:
        cout << "tuesday";
        break;
        case 3:
        cout << "wednesday";
    }
    return 0;
}


//Check if a number is even and greater than 10;
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    bool Even = (x % 2 == 0);
    bool Range = (x >= 1) && (x <= 10);
    bool Greaterthan = (x > 10);
    cout << "Number is even: " << Even << endl;
    cout << "x is between 1 and 10: " << Range << endl;
    cout << "x is greater than 10: " << Greaterthan << endl;
    return 0;
}

//Ask user to enter a number and print its multiplication table from 1 to 10.
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    for (int i = 1; i <= 10; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }

    return 0;
}