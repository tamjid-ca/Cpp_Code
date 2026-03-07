#include <iostream>
using namespace std;

int main() {
    int guess;

    for(int i = 1; i <= 10; i++) {
        cout << "Guess the lucky number: ";
        cin >> guess;

        if(guess == 7) {
            cout << "Yay! Found it!" << endl;
            break;
        }
    }

    return 0;
}