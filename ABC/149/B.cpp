#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    ll A, B, K;
    cin >> A >> B >> K;
    if (K <= A)
    {
        cout << A - K << ' ' << B << endl;
    }
    else
    {
        K -= A;
        if (K <= B)
        {
            cout << 0 << ' ' << B - K << endl;
        }
        else
        {
            cout << 0 << ' ' << 0 << endl;
        }
    }

    return 0;
}