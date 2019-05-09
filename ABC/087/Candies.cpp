#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[2][100];
    int N;
    cin >> N;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    int B[100] = {0};
    int total = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            total = total + A[0][j];
        }
        for (int j = i; j < N; j++) {
            total = total + A[1][j];
        }
        B[i] = total;
        total = 0;
    }
    sort(B, B + N);
    cout << B[N - 1] << endl;

    return 0;
}