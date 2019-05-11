#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    int N;
    int ans = 0;
    int find_ab = 0, last_a = 0, first_b = 0, first_b_last_a = 0;
    string str[10000];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < N; i++) {
        if ((str[i][0] == 'B') && (str[i][str[i].size() - 1] == 'A')) {
            first_b_last_a++;
        }
        else if (str[i][0] == 'B') {
            first_b++;
        }
        else if (str[i][str[i].size() - 1] == 'A') {
            last_a++;
        }
        for (int j = 0; j < str[i].size() - 1; j++) {
            if (str[i][j] == 'A') {
                if (str[i][j + 1] == 'B') {
                    find_ab++;
                }
            }
        }
    }
    if (first_b_last_a == 0) {
        ans = find_ab + min(first_b, last_a);
    }
    else {
        if (first_b + last_a > 0) {
            ans = find_ab + min(first_b, last_a) + first_b_last_a;
        }
        else {
            ans = find_ab + first_b_last_a - 1;
        }
    }
    cout << ans << endl;

    return 0;
}