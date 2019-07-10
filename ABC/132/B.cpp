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
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i < n; i++)
    {
        if (((a[i - 2] < a[i - 1]) && (a[i - 1] < a[i])) || ((a[i] < a[i - 1]) && (a[i - 1] < a[i - 2])))
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}