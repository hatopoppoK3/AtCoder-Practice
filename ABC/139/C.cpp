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
    vector<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }
    vector<int> ans;
    int total = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (H[i] < H[i + 1])
        {
            ans.push_back(total);
            total = 0;
        }
        else
        {
            total++;
        }
    }
    ans.push_back(total);
    cout << *max_element(ans.begin(), ans.end()) << endl;

    return 0;
}