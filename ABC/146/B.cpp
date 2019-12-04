#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
#include <cstdlib>
#include <map>
using ll = long long int;
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    for (char s : S)
    {
        int tmp = s - 'A';
        tmp += N;
        tmp %= 26;
        cout << char('A' + tmp);
    }
    cout << endl;

    return 0;
}