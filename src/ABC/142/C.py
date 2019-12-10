N = int(input())
A = list(map(int, input().split()))
ans = sorted(range(len(A)), key=lambda k:A[k])
print(' '.join(list(map(lambda x:str(x+1), ans))))
