#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char op;
    cin >> x >> op >> y;
    if (op == '+')
    {
        cout << x + y << endl;
    }
    else
    {
        cout << x - y << endl;
    }
    return 0;
}