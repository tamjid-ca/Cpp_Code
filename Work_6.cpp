#include <iostream>
using namespace std;

int main() {
    int length, width;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;

    int area = length * width;
    cout << "The area is: " << area;
    return 0;
}