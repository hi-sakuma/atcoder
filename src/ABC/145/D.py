def factorial_mod(n, divide=10**9+7):
    a = 1 
    for i in range(1, n+1):
        a = a*i % divide
    return a

X, Y = map(int, input().split())
if(X > Y):
    X, Y = Y, X
div = 10 ** 9 + 7
ans = 0
num_x = (2*Y-X) // 3
num_y = (2*X-Y) // 3
n = num_x + num_y
if((X+Y) % 3 != 0):
    ans = 0
elif(num_y < 0):
    ans = 0
else:
    ans = factorial_mod(n) // (factorial_mod(n - num_x) * factorial_mod(num_x))
print(ans)
