def f(n):
    if n==1:return 1
    elif n==2:return 1+f(1)
    elif n==3:return 1+f(1)+f(2)
    else:return f(n-3)+f(n-2)+f(n-1)
    
n=int(input())
print(f(n))