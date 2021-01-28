def f(k):
	for index, value in enumerate(data):
		if value == k:
			return index + 1
	return -1

n=int(input())
data=list(map(int,input().split()))
k=int(input())
print(f(k))