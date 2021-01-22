def f(i,k):
    if i==k: return 1
    if k==1: return 1
    return f(i-1,k-1)+f(i-1,k)

n,r=map(int, input().split())
print(f(n,r))