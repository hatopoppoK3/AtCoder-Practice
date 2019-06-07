#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    pair<string, pair<int, int>> sp[100];
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        string str;
        int p;
        cin >> str >> p;
        sp[i - 1].first = str;
        sp[i - 1].second.first = -p;
        sp[i - 1].second.second = i;
    }
    sort(sp, sp + N);

    for (int i = 1; i <= N; i++)
    {
        cout << sp[i - 1].second.second << endl;
    }

    return 0;
}