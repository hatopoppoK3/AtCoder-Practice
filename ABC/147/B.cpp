#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    string S;
    cin >> S;
    int ans = 0;
    for (unsigned int i = 0; i < S.size() / 2; i++)
    {
        if (S[i] != S[S.size() - (i + 1)])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}