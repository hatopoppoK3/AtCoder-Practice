#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a + b + c;
    if (ans <= 21)
    {
        cout << "win" << endl;
    }
    else
    {
        cout << "bust" << endl;
    }

    return 0;
}