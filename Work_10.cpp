#include <iostream>
using namespace std;

int main() {
    int power1, power2;

    cout << "Enter Power Level 1: ";
    cin >> power1;

    cout << "Enter Power Level 2: ";
    cin >> power2;

    cout << "The higher power is: " << max(power1, power2) << endl;
    cout << "The lower power is: " << min(power1, power2);

    return 0;
}