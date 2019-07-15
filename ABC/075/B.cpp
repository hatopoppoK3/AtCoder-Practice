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
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H);
    for (int i = 0; i < H; i++)
    {
        vector<char> tmp(W);
        for (int j = 0; j < W; j++)
        {
            cin >> tmp[j];
        }
        S[i] = tmp;
    }
    int h[3] = {-1, 0, 1}, w[3] = {-1, 0, 1};
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            int tmp = 0;
            if (S[i][j] == '.')
            {
                for (int k = 0; k < 3; k++)
                {
                    for (int l = 0; l < 3; l++)
                    {
                        if (((i + h[k]) < 0) || ((i + h[k]) >= H))
                        {
                            continue;
                        }
                        else if (((j + w[l]) < 0) || ((j + w[l]) >= W))
                        {
                            continue;
                        }
                        else
                        {
                            if (S[i + h[k]][j + w[l]] == '#')
                            {
                                tmp++;
                            }
                        }
                    }
                }
                cout << tmp;
            }
            else
            {
                cout << S[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}