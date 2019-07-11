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
    string s;
    cin >> s;
    cout << s[0] << s.size() - 2 << s[s.size() - 1];
    return 0;
}