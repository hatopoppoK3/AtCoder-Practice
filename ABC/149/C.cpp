#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int X;
    cin >> X;
    while (true)
    {
        bool flag = true;
        for (int i = 2; i * i <= X; i++)
        {
            if (X % i == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << X << endl;
            break;
        }
        else
        {
            X++;
        }
    }

    return 0;
}