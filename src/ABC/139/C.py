n = int(input())
hs = list(map(int, input().split()))

ans = 0
tmp = 0
for i in range(n-1):
    if hs[i] >= hs[i+1]:
        tmp += 1
        ans = max(ans, tmp)
    else:
        tmp = 0
        continue
print(ans)