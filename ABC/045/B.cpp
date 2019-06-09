#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c;
    int x = 0, y = 0, z = 0;
    char next = 'a';
    cin >> a >> b >> c;
    while (true)
    {
        if (next == 'a')
        {
            next = a[x];
            x++;
            if (x == a.size() + 1)
            {
                cout << "A" << endl;
                break;
            }
        }
        else if (next == 'b')
        {
            next = b[y];
            y++;
            if (y == b.size() + 1)
            {
                cout << "B" << endl;
                break;
            }
        }
        else if (next == 'c')
        {
            next = c[z];
            z++;
            if (z == c.size() + 1)
            {
                cout << "C" << endl;
                break;
            }
        }
    }
    return 0;
}