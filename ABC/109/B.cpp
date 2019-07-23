#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N;
    cin >> N;
    set<string> w;
    vector<string> W(N);
    for (int i = 0; i < N; i++)
    {
        string tmp;
        cin >> tmp;
        w.insert(tmp);
        W[i] = tmp;
    }
    bool flag = true;
    if (w.size() == N)
    {
        for (int i = 0; i < N - 1; i++)
        {
            if (*(W[i].end() - 1) != *W[i + 1].begin())
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        flag = false;
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}