#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int num;
    cin >> str;
    cin >> num;
    for (int i = 0; i < num % str.size(); i++)
    {
        str += str[0];
        str.erase(str.begin() + 0);
    }
    cout << str << endl;

    return 0;
}