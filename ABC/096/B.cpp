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
    int K, A[3];
    cin >> A[0] >> A[1] >> A[2] >> K;
    for (int i = 1; i <= K; i++)
    {
        auto tmp = max_element(A, A + 3);
        *tmp *= 2;
    }
    cout << accumulate(A, A + 3, 0) << endl;
    return 0;
}