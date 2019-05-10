#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    if ((a % 2 == 1) && (b % 2 == 1)) {
        cout << "Odd" << endl;
    }
    else {
        cout << "Even" <<endl;
    }

    return 0;
}