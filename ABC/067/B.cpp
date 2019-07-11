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
    int N, K;
    cin >> N >> K;
    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    sort(L.begin(), L.end(), greater<int>());
    cout << accumulate(L.begin(), L.begin() + K, 0) << endl;
    return 0;
}