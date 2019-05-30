#include <iostream>
using namespace std;

int main () {
    int r, D, x, x_next;
    cin >> r >> D >> x;
    for (int i = 0; i < 10; i++) {
        x_next = r * x - D;
        cout << x_next << endl;
        x = x_next;
    }

    return 0;
}
