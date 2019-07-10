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
    int H, W;
    cin >> H >> W;
    for (int i = -1; i <= H; i++)
    {
        if ((i == -1) || (i == H))
        {
            for (int j = -1; j <= W; j++)
            {
                cout << "#";
            }
        }
        else
        {
            vector<char> tmp(W);
            for (int j = -1; j <= W; j++)
            {
                if ((j == -1) || (j == W))
                {
                    cout << "#";
                }
                else
                {
                    cin >> tmp[j];
                    cout << tmp[j];
                }
            }
        }
        cout << endl;
    }
    return 0;
}