def isSorted(arr):
	for i in range(len(arr) - 1):
		if arr[i] > arr[i + 1]:
			return False
	return True

arr = list(map(int, input("Enter array elements: ").split()))
print(isSorted(arr))
