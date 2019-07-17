#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), greater<int>());
    int Alice = 0, Bob = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2)
        {
            Bob += A[i];
        }
        else
        {
            Alice += A[i];
        }
    }
    cout << Alice - Bob << endl;
    return 0;
}