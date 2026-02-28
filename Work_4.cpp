#include <iostream>
using namespace std;

int main() {
    int currentYear = 2026;
    int age;

    cout << "How old are you? ";
    cin >> age;

    int birthYear = currentYear - age;
    cout << "You were born in: " << birthYear;
    return 0;
}