def f(n):
    if n<10:return n
    else:
        reverse = str(n%10) + str(f(n//10))
        return reverse

n=int(input())
print(f(n))