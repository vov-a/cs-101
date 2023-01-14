def findSmallest(arr):
  smallest = arr[0];
  smallest_index = 0;
  for i in arr:
    if i < smallest:
      smallest = i;
      smallest_index = arr.index(i)
  return smallest_index


def selectionSort(arr):
  temp = []
  for i in range(len(arr)):
    smallest = findSmallest(arr)
    temp.append(arr.pop(smallest))
  return temp


a = [5,2,6,6,0,-1,4,3];
print(selectionSort(a))
  