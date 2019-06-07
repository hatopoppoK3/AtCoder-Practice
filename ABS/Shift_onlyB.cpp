#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, ans = 0;
    long long A[200];
    bool judge = true;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    while (judge)
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 1)
            {
                judge = false;
                ans--;
                break;
            }
            else
            {
                A[i] = A[i] / 2;
            }
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}