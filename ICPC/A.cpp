#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            sort(v.begin(), v.begin() + n);
            int total = 0;
            for (int i = 1; i < n - 1; i++)
            {
                total += v[i];
            }
            cout << total / (n - 2) << endl;
            v.clear();
        }
    }
    return 0;
}