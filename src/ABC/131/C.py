def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)

def lcm(a, b):
    return a // gcd(a, b) * b

def func(x, a, b):
    return (b // x - (a-1) // x)

a, b, c, d = map(int, input().split())
print(b - a + 1 - func(c, a, b) - func(d, a, b) + func(lcm(c, d), a, b))