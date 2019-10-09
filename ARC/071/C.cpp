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
    int N;
    cin >> N;
    vector<vector<int>> ans(N);
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        vector<int> tmp(26, 0);
        for (char c : str)
        {
            tmp[c - 'a']++;
        }
        ans[i] = tmp;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        int tmp = ans[0][c - 'a'];
        for (int j = 1; j < N; j++)
        {
            tmp = min(tmp, ans[j][c - 'a']);
        }
        for (int j = 0; j < tmp; j++)
        {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}