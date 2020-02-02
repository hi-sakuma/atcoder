def canBuy(n, a, b, x):
    pay = a * n + b * len(str(n))
    return pay <= x

a, b, x = map(int, input().split())
max_num = 10 ** 9
if canBuy(max_num, a, b, x):
    print(max_num)
    exit()

imin = 0
imax = max_num
for i in range(31):
    target = (imin + imax) // 2
    if canBuy(target, a, b, x):
        imin = target
    else:
        imax = target

print(imin)