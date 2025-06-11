#include <iostream>
using namespace std;
int main() {
    cout << "Enter Your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    cout << "Enter the radius of a circle: ";
    float r, pi, area;
    pi = 3.142;
    cin >> r;
    area = pi * r * r;
    cout << area;
    
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    cout << "Enter your age: ";
    int a, b;
    cin >> a;
    b = a * 12;
    cout << "Your age in months: " << b;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    cout << "Enter temperature in Celsius: ";
    float t, F;
    F = (t * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << F;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int  b, a;
    cin >> a;
    b = pow(a, 2);
    cout << "The square is " << b;
    return 0;
}



#include <iostream>
using namespace std;
int main() {
    float principal, rate, time, simpleInterest;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (% per annum): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << simpleInterest << endl;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int w;
    float h, BMI;
    cout << "Enter your weight in kg: ";
    cin >> w;
    cout << "Enter your height in meters: ";
    cin >> h;
    BMI = w / (h * h);
    cout << "Your BMI is " << BMI;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "The average is " << (a + b + c) / 3;
    return 0;
}


#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int a;
    cin >> a;
    if (a % 2 == 0) {
        cout << a << " is even. ";
    } else {
        cout << a << " is odd. ";
    }
    return 0;
}