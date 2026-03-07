#include <iostream>
using namespace std;

int main() {
    int num;

    for(int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;

        if(num == 0) {
            cout << "Program stopped!" << endl;
            break;
        }

        cout << num << endl;
    }

    return 0;
}