#include <iostream>
using namespace std;

int main () {
    int N, Y, x = -1, y = -1, z = -1;
    cin >> N >> Y;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (((Y - i * 10000 - j * 5000) / 1000 == (N - i - j)) && ((N - i - j >= 0))) {
                x = i;
                y = j;
                z = N - i - j;
                break;
            }
        }
    }
    cout << x << " " << y << " " << z << endl;

    return 0;
}