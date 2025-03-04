#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int last = arr[4];

    for(int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last; // Move last element to the beginning

    cout << "Right rotated array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
