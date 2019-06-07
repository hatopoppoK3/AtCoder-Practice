#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, L;
    string list[100];
    string ans;
    cin >> N >> L;
    for (int i = 0; i < N; i++)
    {
        cin >> list[i];
    }
    sort(list, list + N);
    ans = list[0];
    for (int i = 1; i < N; i++)
    {
        ans += list[i];
    }
    cout << ans << endl;

    return 0;
}