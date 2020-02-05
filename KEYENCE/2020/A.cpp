#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int H, W, N;
    cin >> H >> W >> N;
    if (N % (max(H, W)) == 0)
    {
        cout << N / max(H, W) << endl;
    }
    else
    {
        cout << (N / max(H, W)) + 1 << endl;
    }

    return 0;
}