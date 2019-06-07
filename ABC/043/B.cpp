#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, ans;
    cin >> s;
    for (char c : s)
    {
        if ((c == 'B') && (!ans.empty()))
        {
            ans.pop_back();
        }
        else if ((c == 'B') && (ans.empty()))
        {
        }
        else
        {
            ans.push_back(c);
        }
    }
    cout << ans << endl;

    return 0;
}