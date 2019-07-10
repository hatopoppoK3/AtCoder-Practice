#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <math.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> ans(M * 2);
    for (int i = 0; i < M; i++)
    {
        cin >> ans[2 * i] >> ans[2 * i + 1];
    }
    for (int i = 1; i <= N; i++)
    {
        cout << count(ans.begin(), ans.end(), i) << endl;
    }

    return 0;
}