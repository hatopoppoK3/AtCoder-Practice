#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> ans;
    for (int i = 0; i < 3; i++)
    {
        string tmp;
        cin >> tmp;
        ans.push_back(tmp);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][i];
    }
    cout << endl;
    
    return 0;
}