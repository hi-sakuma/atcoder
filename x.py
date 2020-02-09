def expectedVal(p):
    res = 0
    for i in range(1, p+1):
        res += i / p
    # print("p:{} {}".format(p,res))
    return res

n, k = map(int, input().split())
P = list(map(int, input().split()))

setP = set(P)
exDict = {}
for x in setP:
    exDict[x] = expectedVal(x)

m = n - k + 1

ans = 0
tmp = [0] * k
total = 0
for i in range(n):
    tmp[i] = exDict[P[i]]
    total += tmp[i]
ans = 0
# for i in range(m):
#     total = 0
#     # print(P[i:i+k])

#     ans = max(ans, total)
#     # print("i:{} ans:{}".format(i,ans))
print(ans)

# # 組み合わせ
# def inv(x, mod=1):
#     return pow(x, mod-2, mod)

# def fact(x, mod=1):
#     res = 1 
#     for i in range(1, x + 1): 
#         res *= i
#         res %= mod    
#     return res

# def comb(n, k, mod=1):
#     return (fact(n, mod) * inv(fact(n-k, mod), mod) * inv(fact(k, mod), mod)) % mod

# # def func(total, n, k, r1, r2, c1, c2, mod):
# #     if n == (r1+c1) or k == c1 or k == r1:
# #         # return comb(r1+c1, c1, mod)
# #         return total+1
    
# #     return total + func(total, n-1, k, r1, r2, c1, c2, mod) + func(total, n, k-1, r1, r2, c1, c2, mod)

# r1, c1, r2, c2 = map(int, input().split())
# mod = 10**9+7
# base_ans = comb(r1+c1, r1, mod)
# print(base_ans)
# ans = base_ans + func(0, r2+c2, c2,r1,r2,c1,c2, mod)
# print(ans)