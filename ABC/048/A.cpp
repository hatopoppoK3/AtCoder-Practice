#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, ans;
    cin >> a >> b >> c;
    ans = a.front();
    ans += b.front();
    ans += c.front();
    cout << ans << endl;
    return 0;
}