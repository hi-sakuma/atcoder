import time
import itertools
n = int(input())
start = time.time()
a = [i for i in range(1, n+1)]
b = list(itertools.permutations(a))
print(b)
elapsed_time = time.time() - start
print(elapsed_time)