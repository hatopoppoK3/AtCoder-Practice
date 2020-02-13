#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> A(N + 1, vector<int>(3, 0));
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
        int dist = abs(A[i - 1][1] - A[i][1]) + abs(A[i - 1][2] - A[i][2]);
        int t = A[i][0] - A[i - 1][0];
        if ((t < dist) || ((t - dist) % 2 != 0))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}