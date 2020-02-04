n = int(input())
ABs = [tuple(map(int, input().split())) for _ in range(n-1)]
vertex = [0 for _ in range(n)]
for ab in ABs:
    for v in ab:
        vertex[v-1] += 1
max_color = max(vertex)
print(max_color)

for ab in ABs:
    ab[0] 



used_color = [[False for _ in range(max_color)] for _ in range(n)]
color = 0
for ab in ABs:
    color = used_color[ab[0]-1].index(False)
    print(color+1)
    for v in ab:
        used_color[v-1][color] = True