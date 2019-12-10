import itertools
import math
N = int(input())
rs = [list(map(int, input().split())) for _ in range(N)]
total = 0
for p in list(itertools.permutations(range(N))):
    dist = 0
    start = rs[p[0]]
    for i in p[1:]:
        dist += ((rs[i][0] - start[0]) ** 2 + (rs[i][1] - start[1]) ** 2 ) ** (1/2)
        start = rs[i]
    total += dist
print(total / math.factorial(N))