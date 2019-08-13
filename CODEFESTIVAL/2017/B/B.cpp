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
    int N, M;
    cin >> N;
    map<int, int> D;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        D[tmp]++;
    }
    cin >> M;
    bool flag = true;
    for (int i = 0; i < M; i++)
    {
        int tmp;
        cin >> tmp;
        if (D[tmp] <= 0)
        {
            flag = false;
            break;
        }
        else
        {
            D[tmp]--;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}