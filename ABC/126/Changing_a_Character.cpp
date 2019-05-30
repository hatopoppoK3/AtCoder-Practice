#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int x, y;
    cin >> x >> y;
    cin >> str;
    y = y - 1;
    if (str[y] == 'A') {
        str[y] = 'a';
    }
    else if (str[y] == 'B') {
        str[y] = 'b';
    }
    else if (str[y] == 'C') {
        str[y] = 'c';
    }
    cout << str << endl;

    return 0;
}