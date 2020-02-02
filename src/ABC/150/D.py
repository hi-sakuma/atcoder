from functools import reduce
def f(n):
    res = 0
    while(n%2 == 0):
        res += 1
        n //= 2
    return res

def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)

def lcm(a, b):
    return a // gcd(a, b) * b

n, m = map(int, input().split())
A = list(map(lambda x: int(x) // 2, input().split()))

l = reduce(lcm, A, 1)
for a in A:
    if((l // a) % 2 == 0):
        print(0)
        break

else:
    ans = (m // l +1) // 2
    print(ans)