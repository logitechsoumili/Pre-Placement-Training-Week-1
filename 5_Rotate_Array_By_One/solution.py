def shift(arr):
	temp = arr[-1]
	for j in range(len(arr) - 1, -1, -1):
		arr[j] = arr[j - 1]
	arr[0] = temp
	print(arr)
arr = list(map(int, input("Enter array elements: ").split()))
shift(arr)