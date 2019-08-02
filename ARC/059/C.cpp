#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <list>
#include <bitset>
#include <cstdlib>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<int> ans;
    for (int i = *min_element(A.begin(), A.end()); i <= *max_element(A.begin(), A.end()); i++)
    {
        int tmp = 0;
        for (int j = 0; j < N; j++)
        {
            tmp += pow((i - A[j]), 2);
        }
        ans.push_back(tmp);
    }
    cout << *min_element(ans.begin(), ans.end()) << endl;
    return 0;
}