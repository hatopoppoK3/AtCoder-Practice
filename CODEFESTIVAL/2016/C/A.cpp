#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int first = str.find('C');
    int last = str.rfind('F');
    if ((first < last) && (0 <= first))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}