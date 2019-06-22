# 最大公約数と最小公倍数

## きっかけ
2019/6/23に行われた[AtCoder Beginner ContestのC問題](https://atcoder.jp/contests/abc131/tasks/abc131_c)。

## ソースコード
python3.4.3
~~~ruby
from fractions import gcd

a = 12
b = 42
ans = gcd(a, b)
ans = a * b // gcd(a, b)
~~~
うん。python便利。

## 参考サイト
- [Pythonで競技プログラミング -ライブラリ編-](https://qiita.com/Kentaro_okumura/items/5b95b767a2e691cd5482)