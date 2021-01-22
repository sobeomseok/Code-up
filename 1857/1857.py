def f(i,k):
    if k==1:return i
    if i==k:return 1
    if i<k:return 0
    return f(i-1,k-1)+f(i-1,k)

n,r=map(int, input().split())
print(f(n,r))
