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
    int N, X;
    cin >> N >> X;
    vector<int> A(N), B(N), C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i];
        C[i] = A[i] * B[i];
    }

    cout << accumulate(C.begin(), C.end(), 0) + *max_element(B.begin(), B.end()) * X << endl;

    return 0;
}