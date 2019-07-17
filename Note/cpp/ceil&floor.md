# ceil & floor

## ceilとfloor
ceilは引数としてdouble,float型の数値をとり、返り値に引数を切り上げした値を返す。  
対して、floorは引数としてdouble,float型の数値をとり、返り値に引数を切り捨てた値を返す。  
この2つはcmathライブラリにあるメソッドである。

## ソースコード
[AtCoder Beginner Contest097のB問題](https://atcoder.jp/contests/abc097/tasks/abc097_b)
~~~ C++
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int X;
    cin >> X;
    int ans = 1;
    for (int i = 1; i <= ceil(sqrt(X)); i++)
    {
        for (int j = 2; j < 10; j++)
        {
            int tmp = pow(i, j);
            if ((tmp <= X) && (ans < tmp))
            {
                ans = tmp;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
~~~

## 参考サイト
[cpprefjp - C++日本語レファレンス](https://cpprefjp.github.io/reference/cmath/floor.html)