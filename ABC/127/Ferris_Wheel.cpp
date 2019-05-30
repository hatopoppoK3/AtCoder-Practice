#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > 12) {
        cout << y << endl;
    }
    else if (x < 6) {
        cout << 0 <<endl;
    }
    else {
        cout << y / 2 << endl;
    }

    return 0;
}