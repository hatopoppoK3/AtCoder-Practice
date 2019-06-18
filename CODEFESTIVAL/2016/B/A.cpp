#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ans = 0;
    string str;
    string sample = "CODEFESTIVAL2016";
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != sample[i])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}