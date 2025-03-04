/*write a person that take input from the user to enter the number of people and then 
take the age of each person  as input the program 
shoulcount and display */
#include <iostream>
using namespace std;

int main() {
    int numPeople, age, count = 0;
    cout << "Enter the number of people: ";
    cin >> numPeople;

    // Loop to input ages and count those in the range 50-60
    for (int i = 0; i < numPeople; i++) {
        cout << "Enter age of person " << i + 1 << ": ";
        cin >> age;

        if (age >= 50 && age <= 60) 
{
            count++;
        }
    }
    cout << "The number of people in the age group 50-60 is: " << count<< endl;

    return 0;
}

