#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N - 1; i++)
    {
        int idx;
        cin >> idx;
        A[idx - 1]++;
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}