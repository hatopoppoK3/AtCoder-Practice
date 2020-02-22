#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

void PrintVector(vector<int> A, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (i != N - 1)
        {
            cout << A[i] << ' ';
        }
        else
        {
            cout << A[i] << endl;
        }
    }
}

int InsertionSort(vector<int> &A, int N, int g)
{
    int cnt = 0;
    for (int i = g; i < N; i++)
    {
        int pivot = A[i];
        int j = i - g;
        while ((j >= 0) && (A[j] > pivot))
        {
            A[j + g] = A[j];
            j -= g;
            cnt++;
        }
        A[j + g] = pivot;
    }
    return cnt;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int m = 0, cnt = 0;
    vector<int> M = {1};
    for (int i = 0; M[i] * 2 <= N; i++)
    {
        M.push_back(M[i] * 2);
    }
    reverse(M.begin(), M.end());
    m = M.size();
    cout << m << endl;
    PrintVector(M, m);
    for (int i = 0; i < m; i++)
    {
        cnt += InsertionSort(A, N, M[i]);
    }
    cout << cnt << endl;
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}