#include <iostream>
using namespace std;

int main()
{
    int board[] = {0, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int x, y;
    cin >> x >> y;
    if (board[x] < board[y])
    {
        cout << "Bob" << endl;
    }
    else if (board[y] < board[x])
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }

    return 0;
}