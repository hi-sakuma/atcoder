n = int(input())
A = [int(input()) for _ in range(n)]

m2, m1  = sorted(A)[-2:]
for i in range(n):
    if A[i]==m1:
        print(m2)
    else:
        print(m1)