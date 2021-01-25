def c(n,r):
    if n==r or r==0:return 1
    return c(n-1,r-1)+c(n-1,r)

n,r=map(int,input().split())
print(c(n,r))