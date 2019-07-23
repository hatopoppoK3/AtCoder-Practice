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
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    vector<int> x(N), y(M);
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < M; i++)
    {
        cin >> y[i];
    }
    sort(y.begin(), y.end());
    bool flag = false;
    for (int i = X + 1; i <= Y; i++)
    {
        if ((x.back() < i) && (y.front() >= i))
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "No War" << endl;
    }
    else
    {
        cout << "War" << endl;
    }
    
    return 0;
}