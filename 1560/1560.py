def f(n,m):
    if n>m:return n-m
    else:return m-n

n,m=map(int, input().split())
print(f(n,m))