
#include <iostream>
using namespace std;

int main() {
    int num, digit, freq[10] = {0};
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    cout << "Digit Frequency:\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << " -> " << freq[i] << " times\n";
        }
    }

    return 0;
}

