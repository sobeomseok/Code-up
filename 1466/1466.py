n,m=map(int, input().split())

for i in range(0,n):
    for j in range(m, 0,-1): print(j*n-i,end=' ')
    print()