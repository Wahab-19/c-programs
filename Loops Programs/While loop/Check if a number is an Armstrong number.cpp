#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "Armstrong number\n";
    else
        cout << "Not an Armstrong number\n";

    return 0;
}

