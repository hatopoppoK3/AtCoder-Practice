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
    int ans = 100;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;
        int j = 0;
        while (!(A & 1))
        {
            A = A >> 1;
            j++;
        }
        if (j < ans)
        {
            ans = j;
        }
    }
    cout << ans << endl;
    return 0;
}