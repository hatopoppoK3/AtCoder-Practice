#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    vector<int> w;
    cin >> N;
    int ans = 100000;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        w.push_back(n);
    }
    for (int i = 0; i < N; i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < N; j++)
        {
            if (j <= i)
            {
                sum1 += w[j];
            }
            else
            {
                sum2 += w[j];
            }
        }
        if (abs(sum1 - sum2) < ans)
        {
            ans = abs(sum1 - sum2);
        }
    }
    cout << ans << endl;

    return 0;
}