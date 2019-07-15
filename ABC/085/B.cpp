#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <numeric>
#include <list>
#include <bitset>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> D;
    for (int i = 0; i < N; i++)
    {
        int d;
        cin >> d;
        if (count(D.begin(), D.end(), d) == 0)
        {
            D.push_back(d);
        }
    }
    cout << D.size() << endl;
    return 0;
}