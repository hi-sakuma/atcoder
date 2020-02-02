n = int(input())
A = list(map(int, input().split()))
idx = 1
ans = 0
for a in A:
    if(a == idx):
        idx += 1
    else:
        ans += 1
print(-1 if ans == n else ans) 