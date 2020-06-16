from math import pi, cos, sqrt

A, B, H, M = map(int, input().split())
m = 2*pi*M/60
h = 2*pi*H/12+pi*M/360
print(sqrt(A**2+B**2-2*A*B*cos(abs(m-h))))
