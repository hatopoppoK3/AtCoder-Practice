#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string divide[] = {"dream", "dreamer", "erase", "eraser"};
    cin >> str;

    reverse(str.begin(), str.end());
    for (int i = 0; i < 4; i++)
    {
        reverse(divide[i].begin(), divide[i].end());
    }

    bool can = true;
    for (int i = 0; i < str.size();)
    {
        bool can2 = false;
        for (int j = 0; j < 4; j++)
        {
            string d = divide[j];
            if (str.substr(i, d.size()) == d)
            {
                can2 = true;
                i += d.size();
            }
        }
        if (!can2)
        {
            can = false;
            break;
        }
    }
    if (can)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}