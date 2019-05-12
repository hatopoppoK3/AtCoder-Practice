#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int N;
    int A[101];
    int score_A = 0, score_B = 0, ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);
    reverse(A, A + N);
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            score_A += A[i];
        }
        else {
            score_B += A[i];
        }
    }
    ans = score_A - score_B;
    cout << ans << endl;

    return 0;
}