import itertools
import math
N = int(input())
rs = [tuple(map(int, input().split())) for _ in range(N)]

# print(list(map(str, range(N))))
patterns = list(itertools.permutations(range(N)))

total = 0
for p in patterns:
    print(p)
    dist = 0
    start = [0, 0]
    for i in p:
        dist = ((rs[i][0] - start[0]) ** 2 + (rs[i][1] - start[1]) ** 2 ) ** (1/2)
        print(dist)
        start = rs[i]
    total += dist
    print(total)
print(math.factorial(N))
print(total / math.factorial(N))