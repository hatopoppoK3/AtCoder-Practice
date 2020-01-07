#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    string ans;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        ans += (to_string(A[i]) + ',');
    }
    ans.pop_back();
    cout << ans << endl;

    return 0;
}