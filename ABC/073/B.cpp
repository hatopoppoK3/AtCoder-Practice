#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> sum(N);
    for (int i = 0; i < N; i++)
    {
        int l, r;
        cin >> l >> r;
        sum[i] = r - l + 1;
    }
    cout << accumulate(sum.begin(), sum.end(), 0);

    return 0;
}