#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int K, S, ans = 0;
    cin >> K >> S;
    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            int n = S - i - j;
            if ((0 <= n) && (n <= K))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}