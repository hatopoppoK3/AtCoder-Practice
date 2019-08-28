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
    map<int, int> A;
    set<int> B;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        B.insert(tmp);
        A[tmp]++;
    }
    int ans = 0;
    for (int i : B)
    {
        if (A[i] & 1)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
