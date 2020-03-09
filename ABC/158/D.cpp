#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    string str;
    cin >> str;
    int Q;
    cin >> Q;
    bool flag = true;
    for (int q = 0; q < Q; q++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            flag = (!flag);
        }
        else
        {
            int a;
            char c;
            cin >> a >> c;
            if (flag)
            {
                if (a == 1)
                {
                    str.insert(str.begin(), c);
                }
                else
                {
                    str += c;
                }
            }
            else
            {
                if (a == 1)
                {
                    str += c;
                }
                else
                {
                    str.insert(str.begin(), c);
                }
            }
        }
    }
    if (!flag)
    {
        reverse(str.begin(), str.end());
    }
    cout << str << endl;

    return 0;
}