def quicksort(arr):
  if len(arr) < 2:
    return arr;
  else:
    pivot = arr[0]
    less = [i for i in arr[1:] if i < pivot]
    greater = [i for i in arr[1:] if i > pivot]
    return quicksort(less) + [pivot] + quicksort(greater)


print(quicksort([5,2,6,6,0,-1,4,3]))