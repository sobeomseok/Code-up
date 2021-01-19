n,m=map(int, input().split())

for i in range(1,n+1):
    for j in range(m,0,-1):print(n*j-n+i, end=' ')
    print()