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
    set<char> S;
    string ans[2] = {"Three", "Four"};
    for (int i = 0; i < N; i++)
    {
        char s;
        cin >> s;
        S.insert(s);
    }
    cout << ans[S.size() - 3] << endl;
    return 0;
}