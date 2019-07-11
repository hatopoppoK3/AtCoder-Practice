# bit演算

## きっかけ
[AtCoder Beginner Contest068のB問題](https://atcoder.jp/contests/abc068/tasks/abc068_b)の問題について、bit演算系の問題があったため。

## ソースコード
~~~python
N = int(input())
ans = 0
for i in range(0, 7):
    ans = i if N >> i & 1 else ans
print(1<<ans)
~~~
and演算については&,or演算については|,xor演算については^,で求めることができる。bin()を用いるとstr型で出力することができる。