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
#include <map>
using ll = long long int;
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> S(M);
    for (int i = 0; i < M; i++)
    {
        int K;
        cin >> K;
        vector<int> s(K);
        for (int j = 0; j < K; j++)
        {
            cin >> s[j];
        }
        S[i] = s;
    }
    vector<int> P(M);
    for (int i = 0; i < M; i++)
    {
        cin >> P[i];
    }
    int ans = 0;
    for (int i = 0; i < (1 << N); i++)
    {
        bool flag = true;
        string str = "";
        for (int j = N - 1; j >= 0; j--)
        {
            str += to_string((i >> j) & 1);
        }
        for (int j = 0; j < M; j++)
        {
            int total = 0;
            for (int s : S[j])
            {
                if (str[s - 1] == '1')
                {
                    total++;
                }
            }
            if (total % 2 != P[j])
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