#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string str1, str2;
    int x, y;
    cin >> str;
    str1 = str.substr(0, 2);
    str2 = str.substr(2, 2);
    x = stoi(str1);
    y = stoi(str2);
    if (((1 <= x) && (x <= 12)) && ((1 <= y) && (y <= 12)))
    {
        cout << "AMBIGUOUS" << endl;
    }
    else if ((1 <= x) && (x <= 12))
    {
        cout << "MMYY" << endl;
    }
    else if ((1 <= y) && (y <= 12))
    {
        cout << "YYMM" << endl;
    }
    else
    {
        cout << "NA" << endl;
    }

    return 0;
}