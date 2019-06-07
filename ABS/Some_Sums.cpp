#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    int ans = 0;
    cin >> N >> A >> B;
    for (int i = 1; i <= N; i++)
    {
        if ((0 < i) && (i < 10))
        {
            if ((A <= i) && (i <= B))
            {
                ans += i;
            }
        }
        else if ((10 <= i) && (i < 100))
        {
            if ((A <= (i / 10 + i % 10)) && ((i / 10 + i % 10) <= B))
            {
                ans += i;
            }
        }
        else if ((100 <= i) && (i < 1000))
        {
            if ((A <= (i / 100 + (i % 100) / 10 + i % 10)) && ((i / 100 + (i % 100) / 10 + i % 10) <= B))
            {
                ans += i;
            }
        }
        else if ((1000 <= i) && (i < 10000))
        {
            if ((A <= (i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + i % 10) && ((i / 1000 + (i % 1000) / 100 + (i % 100) / 10 + i % 10) <= B)))
            {
                ans += i;
            }
        }
    }
    if (N == 10000)
    {
        ans += 10000;
    }
    cout << ans << endl;

    return 0;
}