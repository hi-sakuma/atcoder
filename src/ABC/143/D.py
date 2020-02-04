import bisect
N = int(input())
L = list(map(int, input().split()))
L.sort()
ans = 0
for i in range(N-2):
    for j in range(i+1, N-1):
        k = bisect.bisect_left(L, L[i]+L[j])
        ans += max(0, k-j-1)
print(ans)