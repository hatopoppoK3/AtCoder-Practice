# sort

## c++によるvectorのsort
sortはalgorithmライブラリの中にある。sort(初期地点のイテレータ,終点地点のイテレータ)で基本的に実装できる。これを実行すると、指定したvectorが昇順にソートされる。

## ソースコード
[AtCoder Beginner Contest067のB問題](https://atcoder.jp/contests/abc067/tasks/abc067_b)  
このコードでは降順にソートをしている。
~~~c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    //降順にソート
    sort(L.begin(), L.end(), greater<int>());
    cout << accumulate(L.begin(), L.begin() + K, 0) << endl;
    return 0;
}
~~~
昇順と降順が逆になったりしちゃう。
