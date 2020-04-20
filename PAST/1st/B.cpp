#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i < N; i++)
    {
        if (A[i] == A[i - 1])
        {
            cout << "stay" << endl;
        }
        else if (A[i] > A[i - 1])
        {
            cout << "up " << A[i] - A[i - 1] << endl;
        }
        else
        {
            cout << "down " << A[i-1] - A[i] << endl;
        }
        
    }

    return 0;
}