# 文字列の数値変換

## stringからintへの変換
std::stoi(string型)でstring型からint型の変換ができる。  
また、std::stodはdouble型変換、std::stofはfloat型に変換するメソッドである。  
stringではないがchar型からint型の変換をしたい場合はc-'0'をしてあげれば、数値の変換ができる。  

## ソースコード
[AtCoder Beginner Contest101のB問題](https://atcoder.jp/contests/abc101/tasks/abc101_b)
~~~ C++
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = N;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (N % sum)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}
~~~
途中のwhile文は各桁を足した数を求めている。(よくあるやつ)

## 参考サイト
[cpprefjp - C++日本語レファレンス](https://cpprefjp.github.io/reference/string/stoi.html)