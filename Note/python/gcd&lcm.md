# 最大公約数と最小公倍数

## きっかけ
2019/6/23に行われた[AtCoder Beginner Contest131のC問題](https://atcoder.jp/contests/abc131/tasks/abc131_c)。

## gcdの特性    2019/7/11追記
$$
(i * j)\mod 2019
$$
上のような剰余算の結果を求めるとき、mod計算については分配則を適用することができるため、次のように表すことができる。
$$
(i * j)\mod 2019 = ((i\mod 2019) * (j\mod 2019))\mod 2019
$$
このことを利用することで[AtCoder Beginner Contest133のC問題](https://atcoder.jp/contests/abc133/tasks/abc133_c)についても楽に解くことができた。(追記終わり)

## ソースコード
python3.4.3
~~~python
from fractions import gcd

a = 12
b = 42
ans = gcd(a, b)
ans = a * b // gcd(a, b)
~~~
うん。python便利。

## 参考サイト
- [Pythonで競技プログラミング -ライブラリ編-](https://qiita.com/Kentaro_okumura/items/5b95b767a2e691cd5482)