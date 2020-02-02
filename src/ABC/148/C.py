def gcd(a, b):
    return a if b == 0 else gcd(b, a%b)

def lcm(a, b):
    return a // gcd(a, b) * b

a, b = map(int, input().split())
print(lcm(a, b))