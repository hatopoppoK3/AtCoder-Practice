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
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> A(N, 0);
    for (int i = 0; i < M; i++)
    {
        int tmp;
        cin >> tmp;
        A[tmp - 1] = 1;
    }
    cout << min(accumulate(A.begin(), A.begin() + X, 0), accumulate(A.begin() + X, A.end(), 0)) << endl;

    return 0;
}