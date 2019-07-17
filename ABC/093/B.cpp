
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
    int A, B, K;
    cin >> A >> B >> K;
    set<int> s;
    for (int i = A; i < min(A + K, B + 1); i++)
    {
        s.insert(i);
    }
    for (int i = max(A, B - K + 1); i <= B; i++)
    {
        s.insert(i);
    }
    for (int i : s)
    {
        cout << i << endl;
    }
    return 0;
}