#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int D[101];
    int ans = 1, top_radius = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> D[i];
    }
    sort(D, D + N);
    reverse(D, D + N);
    top_radius = D[0];
    for (int i = 1; i < N; i++)
    {
        if (D[i] < top_radius)
        {
            top_radius = D[i];
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}