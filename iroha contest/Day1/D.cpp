#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            X += v[i];
        }
        else
        {
            Y += v[i];
        }
    }
    if (X > Y)
    {
        cout << "Takahashi" << endl;
    }
    else if (X < Y)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }

    return 0;
}