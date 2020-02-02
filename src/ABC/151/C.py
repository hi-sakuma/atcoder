n, m = map(int, input().split())
ans = [0, 0]
ac = [False for _ in range(n)]
wa = [0 for _ in range(n)]

for _ in range(m):
    tmp, s = input().split()
    p = int(tmp)
    # 正解済みならスキップ
    if(ac[p-1]):
        continue
    # 正解ならAC数とWA数を加算
    if(s == "AC"):
        ans[0] += 1
        ans[1] += wa[p-1]
        ac[p-1] = True
    # 不正解なら暫定WA数を加算
    else:
        wa[p-1] += 1
 
print("{} {}".format(*ans))