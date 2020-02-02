def is_prime(x):
    if x < 2:
        return False
    if x == 2:
        return True
    if x % 2 == 0:
        return False
    for i in range(3,int(x**0.5)+1, 2):
        if x%i == 0 :
             return False
    return True

x = int(input())
for i in range(x, 100003):
    if is_prime(i):
        print(i)
        break
else:
    print(100003)