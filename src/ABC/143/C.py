from itertools import groupby

N = input()
S = input()

print(len(list(groupby(S))))