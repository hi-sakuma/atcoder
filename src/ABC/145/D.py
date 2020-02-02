def inv(x, mod=1):
    return pow(x, mod-2, mod)

def fact(x, mod=1):
    res = 1 
    for i in range(1, x + 1): 
        res *= i
        res %= mod    
    return res

def comb(n, k, mod=1):
    return (fact(n, mod) * inv(fact(n-k, mod), mod) * inv(fact(k, mod), mod)) % mod

div = 10 ** 9 + 7
X, Y = map(int, input().split())

if (X+Y) % 3 != 0:
    print(0)
    exit()

n = (X+Y) // 3
X -= n
Y -= n
if X < 0 or Y < 0:
    print(0)
    exit()

ans = comb(X+Y, X, div)
print(ans)