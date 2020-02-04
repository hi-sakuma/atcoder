n = int(input())
ds = sorted(list(map(int, input().split())))
mid = n // 2
print(ds[mid] - ds[mid-1])
