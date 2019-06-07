#include <iostream>
using namespace std;

int main()
{
    int N, K, X, Y, ans = 0;
    cin >> N >> K >> X >> Y;
    for (int i = 0; i < N; i++)
    {
        if (i < K)
        {
            ans += X;
        }
        else
        {
            ans += Y;
        }
    }
    cout << ans << endl;
    return 0;
}