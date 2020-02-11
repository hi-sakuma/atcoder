'''
# 入力
s = input()
s, t = input().split()
n = int(input())
n, m = map(int, input().split())
a = list(map(int, input().split()))
a = [int(input()) for _ in range(n)]
AB = [list(map(int,input().split())) for _ in range(n)]
'''

'''
#出力
print("Yes" if True else "No")
print("No" if False else "Yes")
'''


''' 
切り捨て
a // b
# 切り上げ
-(-a // b)

# 最大公約数、最小公倍数
def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)

def lcm(a, b):
    return a // gcd(a, b) * b

#素数判定
def is_prime(x):
    if x < 2:
        return False
    if x == 2:
        return True
    if x % 2 == 0:
        return False
    for i in range(2,int(x**0.5)+1, 2):
        if x%i == 0 :
             return False
    return True

# 組み合わせ
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

# bit演算
# ~x = -(x + 1)
# 1からn-1までの総和 n*(n-1)//2のbit演算を用いた書き方
# n*~-n//2

'''

'''
# 文字列リストの結合
"".join()
'''