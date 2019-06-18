#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> ans;
    int H, W, N;
    cin >> W >> H >> N;
    for (int i = 0; i < H; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < W; j++)
        {
            tmp.push_back(1);
        }
        ans.push_back(tmp);
    }

    for (int i = 0; i < N; i++)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1)
        {
            for (int j = 0; j < H; j++)
            {
                for (int k = 0; k < x; k++)
                {
                    ans[j][k] = 0;
                }
            }
        }
        else if (a == 2)
        {
            for (int j = 0; j < H; j++)
            {
                for (int k = x; k < W; k++)
                {
                    ans[j][k] = 0;
                }
            }
        }
        else if (a == 3)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < W; k++)
                {
                    ans[j][k] = 0;
                }
            }
        }
        else
        {
            for (int j = y; j < H; j++)
            {
                for (int k = 0; k < W; k++)
                {
                    ans[j][k] = 0;
                }
            }
        }
    }

    int total = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (ans[i][j] == 1)
            {
                total++;
            }
        }
    }
    cout << total << endl;

    return 0;
}