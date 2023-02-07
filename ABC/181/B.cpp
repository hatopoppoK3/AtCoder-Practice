#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;

    ll total = 0;

    for (int i = 0; i < N; i++)
    {
        ll a, b;
        cin >> a >> b;
        total += ((b - a + 1) * (a + b)) / 2;
    }
    cout << total << endl;

    return 0;
}