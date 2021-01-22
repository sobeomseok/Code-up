def f(n):
    j=0
    for i in range(2,n+1):
        if n%i==0:j+=1
    if j==1:print("prime")
    else:print("composite")

n=int(input())
f(n)
