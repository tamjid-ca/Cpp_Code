#include <iostream>
using namespace std;

int main() {
    int box1;
    int box2;

    cout << "Weight of Box 1? ";
    cin >> box1;

    cout << "Weight of Box 2? ";
    cin >> box2;

    int total = box1 + box2;

    cout << "Total weight: " << total;
}