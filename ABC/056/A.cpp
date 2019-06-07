#include <iostream>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;
    if (a ^ b)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "H" << endl;
    }
    return 0;
}