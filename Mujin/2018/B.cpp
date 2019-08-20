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
    int A;
    cin >> A;
    string S;
    cin >> S;
    if (A == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    for (char c : S)
    {
        if (c == '+')
        {
            A++;
        }
        else
        {
            A--;
        }
        if (A == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}