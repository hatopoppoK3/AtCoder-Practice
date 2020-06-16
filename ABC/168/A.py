S = str(input())[-1]
tmp = ['0', '1', '6', '8']
if S == '3':
    print('bon')
elif S in tmp:
    print('pon')
else:
    print('hon')
