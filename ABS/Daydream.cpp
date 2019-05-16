#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    string str;
    bool judge = true;
    int count = 0;
    cin >> str;
    while (count < str.size()) {
        if (str.find("dream") >= 0) {
            str.replace(count, count + 5, "X");
            count += 1;
        }
        else if (str.find("erase") >= 0) {
            str.replace(count, count + 5, "Y");
            count += 1;
        }
        else {
            count++;
        }
    }
    cout << str <<endl;
    count = 0;
    while (count < str.size()) {
        if ((count + 2 < str.size()) && (str[count] == 'X') && (str[count + 1] == 'e') && (str[count + 2] == 'r')) {
            count += 3;
        }
        else if ((count + 1 < str.size()) && (str[count] == 'Y') && (str[count + 1] == 'r')) {
            count += 2;
        }
        else if (str[count] == 'X') {
            count++;
        }
        else if (str[count] == 'Y') {
            count++;
        }
        else {
            judge = false;
            break;
        }
    }
    if (judge) {
        cout << "YES" <<endl;
    }
    else {
        cout << "NO" <<endl;
    }
    
    
    return 0;
}