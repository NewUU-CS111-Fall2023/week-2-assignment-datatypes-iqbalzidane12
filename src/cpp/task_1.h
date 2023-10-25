/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
using namespace std;
bool isleapyear(int year) {

    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isleapyear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
