# pow

## きっかけ
[AtCoder Beginner Contest055](https://atcoder.jp/contests/abc055/tasks/abc055_b)のその余りを求めることができる。

## ソースコード
python3.4.3
~~~python
from math import factorial

N = 10000
ans = factorial(N)
print(pow(ans, 1, (10 ** 9 + 7)))
~~~
powは第三引数を指定するとその余りを求めることができる。