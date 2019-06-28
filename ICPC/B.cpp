#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> ans(N);
    vector<vector<char>> sample;
    sample.push_back({'.', ',', '!', '?', ' '});
    sample.push_back({'a', 'b', 'c'});
    sample.push_back({'d', 'e', 'f'});
    sample.push_back({'g', 'h', 'i'});
    sample.push_back({'j', 'k', 'l'});
    sample.push_back({'m', 'n', 'o'});
    sample.push_back({'p', 'q', 'r', 's'});
    sample.push_back({'t', 'u', 'v'});
    sample.push_back({'w', 'x', 'y', 'z'});
    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        int pivot = 0;
        while (pivot < str.size())
        {
            int count = 0;
            string c;
            if (str[pivot] != '0')
            {
                c = str[pivot];
                while (str[pivot] != '0')
                {
                    count++;
                    pivot++;
                }
                int n = stoi(c);
                if (n == 1)
                {
                    cout << sample[0][(count - 1) % 5];
                }
                else if ((n == 7) || (n == 9))
                {
                    cout << sample[n - 1][(count - 1) % 4];
                }
                else
                {
                    cout << sample[n - 1][(count - 1) % 3];
                }
            }
            else
            {
                pivot++;
            }
        }
        cout << endl;
    }

    return 0;
}