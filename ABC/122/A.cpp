#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    bool ans = true;
    int k;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cin >> k;
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if ((abs(v[i] - v[j])) > k)
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
    {
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }

    return 0;
}