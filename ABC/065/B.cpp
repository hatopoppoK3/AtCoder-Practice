#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int next = 0;
    int pop = 0;
    bool judge = false;
    for (int i = 0; i < N; i++)
    {
        pop++;
        if (a[next] == 2)
        {
            judge = true;
            break;
        }
        else
        {
            next = a[next] - 1;
        }
    }
    if (judge)
    {
        cout << pop << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}