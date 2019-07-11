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
    string N;
    cin >> N;
    int fX = 0, X = stoi(N);
    for (int i = 0; i < N.size(); i++)
    {
        fX += (N[i] - '0');
    }
    int ans = X % fX;
    if (ans)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}