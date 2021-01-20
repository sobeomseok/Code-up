def f(n):
    if n<=0:return
    f(n-1)
    g(n)
    print()
    return
    
def g(n):
    if n<=0:return
    g(n-1)
    print(n,end=" ")
    
n=int(input())
f(n)