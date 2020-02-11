def sigma(n):
    return (n+1) * n//2 if n % 2 == 0 else sigma(n-1)+n

n = int(input())
Ss = [sorted(input()) for _ in range(n)]
Ss.sort()
src = []
ans = 0
for i in range(n):
    if(src == Ss[i]):
        continue
    else:
        src = [] 
    if not src:
        ans += sigma(Ss.count(Ss[i])-1)
        src = Ss[i]
print(ans)