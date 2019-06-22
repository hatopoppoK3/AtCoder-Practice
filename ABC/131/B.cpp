#include <iostream>
using namespace std;

int main()
{
    int N, L;
    cin >> N >> L;
    int ans = 0;
    int min = 100;
    for (int i = 0; i < N; i++)
    {
        int n = L + i;
        if (abs(n) < abs(min))
        {
            min = n;
        }
        ans += n;
    }
    cout << ans - min << endl;
    return 0;
}