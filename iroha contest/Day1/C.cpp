#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;
    for (int i = 0; i < 8; i++)
    {
        cout << day + i - 7 << endl;
    }

    return 0;
}