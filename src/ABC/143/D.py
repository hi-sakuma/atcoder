import bisect
N = int(input())
L = list(map(int, input().split()))

ans = 0

# 全探索ではO(N^3)でTLE
# for i in range(N):
#     for j in range(i+1, N):
#         for k in range(j+1, N):
#             if(L[i] < (L[j] + L[k]) and L[j] < (L[k] + L[i]) and L[k] < (L[i] + L[j])):
#                 ans += 1

L.sort()
print(L)
for i in range(N-2):
    for j in range(i+1, N-1):
        k = bisect.bisect_left(L, L[j]+1)
        if(L[k] < L[i] + L[j]):
            ans+=1

print(ans)