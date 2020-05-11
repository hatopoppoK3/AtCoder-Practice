#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int K, A, B;
    cin >> K >> A >> B;
    for (int i = A; i <= B; i++)
    {
        if (i % K == 0)
        {
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;

    return 0;
}