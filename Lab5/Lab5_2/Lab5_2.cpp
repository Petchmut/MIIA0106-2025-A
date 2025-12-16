#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int maxOfThree(int a, int b, int c) {
    int max;

    if (a >= b && a >= c) {
        max = a;
    }
    else if (b >= a && b >= c) {
        max = b;
    }
    else {
        max = c;
    }

    return max;
}

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a;
    cout << "Enter three numbers: ";
    cin >> b;
    cout << "Enter three numbers: ";
    cin >> c;

    cout << "Maximum value is: " << maxOfThree(a, b, c) << endl;

    return 0;
}
