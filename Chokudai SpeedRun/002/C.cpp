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
    vector<ll> ans(N);
    for (int i = 0; i < N; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        ans[i] = tmp1 + tmp2;
    }
    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}