#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int a, b, M, minA = 100000000, minB = 100000000;
    cin >> a >> b >> M;
    vector<int> A(a, 0), B(b, 0);
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
        minA = min(minA, A[i]);
    }
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
        minB = min(B[i], minB);
    }
    int ans = minA + minB;
    for (int i = 0; i < M; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        ans = min(ans, A[x - 1] + B[y - 1] - c);
    }
    cout << ans << endl;

    return 0;
}