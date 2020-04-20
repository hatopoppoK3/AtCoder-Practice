#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<vector<bool>> ans(N, vector<bool>(N, false));
    for (int i = 0; i < Q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b;
            cin >> a >> b;
            ans[a - 1][b - 1] = true;
        }
        else if (x == 2)
        {
            int a;
            cin >> a;
            a--;
            for (int j = 0; j < N; j++)
            {
                if ((ans[j][a]) && (j != a))
                {
                    ans[a][j] = true;
                }
            }
        }
        else
        {
            int a;
            cin >> a;
            a--;
            vector<int> tmp;
            for (int j = 0; j < N; j++)
            {
                if ((ans[a][j]) && (a != j))
                {
                    tmp.push_back(j);
                }
            }
            for (int j : tmp)
            {
                for (int k = 0; k < N; k++)
                {
                    if ((ans[j][k]) && (a != k))
                    {
                        ans[a][k] = true;
                    }
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (ans[i][j])
            {
                cout << 'Y';
            }
            else
            {
                cout << 'N';
            }
        }
        cout << endl;
    }

    return 0;
}