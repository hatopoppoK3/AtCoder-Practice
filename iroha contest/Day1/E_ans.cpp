#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long N, A, B, ans = 0, D[200002];

    cin >> N >> A >> B;
    for (int i = 0; i < B; i++)
    {
        cin >> D[i];
    }
    D[B] = 0;
    D[B + 1] = N + 1;
    sort(D, D + B + 2);
    for (int i = 0; i < B + 1; i++)
    {
        long long d = D[i + 1] - D[i] - 1;
        ans += d - d / A;
    }
    cout << ans << endl;

    return 0;
}