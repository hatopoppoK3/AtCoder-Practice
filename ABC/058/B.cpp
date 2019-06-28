#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string str[2];
    cin >> str[0] >> str[1];
    for (int i = 0; i < (str[0].size() + str[1].size()); i++)
    {
        cout << str[i % 2][i / 2];
    }
    cout << endl;

    return 0;
}