#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, D, ans = 0;
    cin >> T >> A >> B >> C >> D;
    if (C <= T)
    {
        T -= C;
        ans += D;
    }
    if (A <= T)
    {
        ans += B;
    }
    cout << ans << endl;
    
    return 0;
}