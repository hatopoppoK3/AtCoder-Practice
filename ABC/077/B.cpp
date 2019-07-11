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
    long long N;
    cin >> N;
    int ans = int(sqrt(N));
    cout << ans * ans << endl;
    return 0;
}