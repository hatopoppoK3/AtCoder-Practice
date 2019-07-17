#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    vector<int> M(N);
    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }
    X -= accumulate(M.begin(), M.end(), 0);
    sort(M.begin(), M.end());
    cout << X / M[0] + N << endl;
    return 0;
}