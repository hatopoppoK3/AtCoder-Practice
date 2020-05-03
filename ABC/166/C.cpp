#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> H(N, 0);
    vector<bool> X(N, true);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        if (H[A - 1] == H[B - 1])
        {
            X[B - 1] = false;
            X[A - 1] = false;
        }
        else if (H[A - 1] > H[B - 1])
        {
            X[B - 1] = false;
        }
        else
        {
            X[A - 1] = false;
        }
    }
    cout << count(X.begin(), X.end(), true) << endl;

    return 0;
}