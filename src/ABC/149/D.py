n, k = map(int, input().split())
r, s, p = map(int, input().split())
t = input()

point = {"r":p, "s":r, "p":s}

log = ["" for _ in range(k)] 
ans = 0
for i, play in enumerate(t):
    if play == log[i % k]:
        log[i % k] = ""
        continue
    log[i % k] = play
    ans += point[play]
print(ans)