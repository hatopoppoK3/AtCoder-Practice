#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    char s[3];
    cin >> s;
    cout << count(s, s + 3, '1') << endl;

    return 0;
}