arr = list(map(int, input("Enter array elements: ").split()))
arr = list(set(arr))
arr.sort()
if len(arr) == 1:
	print(-1)
else:
	print(arr[-2])