#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s.rfind('Z') - s.find('A') + 1 << endl;

    return 0;
}