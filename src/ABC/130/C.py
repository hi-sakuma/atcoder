w, h, x, y = map(int, input().split())
area = w * h / 2
isCenter = w % 2 == 0 and h % 2 == 0 and x == w//2 and y == h//2
print("{} {}".format(area, 1 if isCenter else 0))