L, R = map(int,input().split())
ans = 2020
for i in range(L, R):
    for j in range(i+1, R+1):
        mod = (i * j) % 2019
        if mod == 0:
            print(0)
            exit()
        ans = min(ans, mod)
print(ans)