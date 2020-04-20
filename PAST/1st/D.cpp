#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        int idx;
        cin >> idx;
        A[idx]++;
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= N; i++)
    {
        if (A[i] == 2)
        {
            ans1 = i;
        }
        else if (A[i] == 0)
        {
            ans2 = i;
        }
    }
    if ((ans1 == 0) && (ans2 == 0))
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << ans1 << " " << ans2 << endl;
    }

    return 0;
}