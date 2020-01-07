#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    ll ans = 0;
    for (int pivot = 1; pivot < N - 1; pivot++)
    {
        int begin = 0, end = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] < A[pivot])
            {
                if (i < pivot)
                {
                    begin++;
                }
                else if (pivot < i)
                {
                    end++;
                }
            }
        }
        ans += begin * end;
    }
    cout << ans << endl;

    return 0;
}