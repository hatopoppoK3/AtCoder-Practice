#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    int L[100000], R[100000];
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> L[i] >> R[i];
    }
    sort(L, L + M);
    sort(R, R + M);
    if (0 <= R[0] - L[M - 1])
    {
        cout << R[0] - L[M - 1] + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}