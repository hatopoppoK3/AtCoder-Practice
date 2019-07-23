#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
#include <cstdlib>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N);
    for (int i = 0; i < N; i++)
    {
        int K;
        cin >> K;
        vector<int> a(K);
        for (int j = 0; j < K; j++)
        {
            cin >> a[j];
        }
        A[i] = a;
    }
    int ans = 0;
    for (int i = 1; i <= M; i++)
    {
        bool flag = true;
        for (int j = 0; j < N; j++)
        {
            if (count(A[j].begin(), A[j].end(), i) == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}