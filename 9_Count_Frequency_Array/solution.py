arr = list(map(int, input("Enter array elements: ").split()))
n = len(arr)
res = [0] * n

for num in arr:
	res[num - 1] += 1

print(res)