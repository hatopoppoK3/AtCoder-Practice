# pow

## きっかけ
[AtCoder Beginner Contest055のその余りを求めることができるtcoder.jp/contests/abc055/tasks/abc055_b)。

## ソースコード
python3.4.3
~~~ruby
from math import factorial

N = 10000
ans = factorial(N)
print(pow(ans, 1, (10 ** 9 + 7)))
~~~
powは第三引数を指定するとその余りを求めることができる。