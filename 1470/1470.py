n=int(input())
m=[[0]*n for i in range(n)]
s=0

for i in range(0,n):
    if i%2:
        for j in range(n-1,-1,-1):
            s+=1
            m[j][i]=s
    else:
        for j in range(0,n):
            s+=1
            m[j][i]=s
            
for i in range(0, n):
    for j in range(0, n):
        print(m[i][j],end=' ')
    print()