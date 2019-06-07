#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[3];
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A + 3);
    if ((A[0] == 5) && (A[1] == 5) && (A[2] == 7))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}