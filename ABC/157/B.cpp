#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    vector<vector<int>> A(3, {0, 0, 0});
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    vector<vector<bool>> ans(3, {false, false, false});
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (A[i][j] == x)
                {
                    ans[i][j] = true;
                }
            }
        }
        if ((ans[0][0] && ans[1][0] && ans[2][0]) ||
            (ans[0][1] && ans[1][1] && ans[2][1]) ||
            (ans[0][2] && ans[1][2] && ans[2][2]) ||
            (ans[0][0] && ans[0][1] && ans[0][2]) ||
            (ans[1][0] && ans[1][1] && ans[1][2]) ||
            (ans[2][0] && ans[2][1] && ans[2][2]) ||
            (ans[0][0] && ans[1][1] && ans[2][2]) ||
            (ans[2][0] && ans[1][1] && ans[0][2]))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}