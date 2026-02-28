#include <iostream>
using namespace std;

int main() {
    int coins = 100;
    int people = 2;

    int share = coins / people;
    cout << "Each person gets: " << share;
    return 0;
}