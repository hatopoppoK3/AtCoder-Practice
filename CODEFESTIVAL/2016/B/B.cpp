#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
#include <cstdlib>
#include <map>
using ll = long long int;
using namespace std;

int main()
{
    int N, A, B, ans = 0, b = 0;
    string S;
    cin >> N >> A >> B >> S;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'a')
        {
            if (ans < (A + B))
            {
                ans++;
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (S[i] == 'b')
        {
            b++;
            if ((ans < (A + B)) && (b <= B))
            {
                ans++;
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}