#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

bool isPrime(int a)
{
    for (int i = 3; i <= sqrt(a); i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        if (a == 2)
        {
            ans++;
        }
        else if (a % 2 != 0)
        {
            if (isPrime(a))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}