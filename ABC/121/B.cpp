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
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp = 0;
        for (int j = 0; j < M; j++)
        {
            int a;
            cin >> a;
            tmp += a * B[j];
        }
        tmp += C;
        if (tmp > 0)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}