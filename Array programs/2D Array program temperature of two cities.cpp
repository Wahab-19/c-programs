#include <iostream>
using namespace std;
int main() {
    const int cities = 2; // Number of cities
    const int days = 7;   // Number of days in a week
    double temperature[cities][days];
    // Input temperature data
    cout << "Enter temperatures for two cities over a week:\n";
    for (int i = 0; i < cities; i++) {
        cout << "City " << i + 1 << ":\n";
        for (int j = 0; j < days; j++) {
            cout << "  Day " << j + 1 << ": ";
            cin >> temperature[i][j];
        }
    }
    // Display stored temperatures
    cout << "\nStored Temperatures:\n";
    for (int i = 0; i < cities; i++) {
        cout << "City " << i + 1 << ": ";
        for (int j = 0; j < days; j++) {
            cout << temperature[i][j] << " ";
        }
        cout << endl;
    }
    // Find the city with the highest recorded temperature
    double maxTemp = temperature[0][0];
    int hottestCity = 1;
    for (int i = 0; i < cities; i++) {
        for (int j = 0; j < days; j++) {
            if (temperature[i][j] > maxTemp) {
                maxTemp = temperature[i][j];
                hottestCity = i + 1;
            }
        }
    }
    cout << "\nThe hottest recorded temperature was " << maxTemp << "°C in City " << hottestCity << ".\n";\
    return 0;
}

