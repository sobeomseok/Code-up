n=int(input())

for i in range(1,n+1):
    if i%2:
        for j in range(1,n+1):print(i*n-n+j, end=' ')
        print()
    else:
        for j in range(1,n+1):print(i*n-j+1, end=' ')
        print()