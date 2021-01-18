def f(n):
    if n<=0:return 
    f(n-1)
    print("*", end='')
k=int(input())
f(k)