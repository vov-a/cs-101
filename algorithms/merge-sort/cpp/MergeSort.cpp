#include <iostream>
#include <vector>


void MergeSortedInterval(std::vector<int> &v, int start, int mid, int end)
{
  std::vector<int> temp;

  int i,j;
  i = start;
  j = mid + 1;

  while(i <= mid && j <= end)
  {
    if (v[i] <= v[j])
    {
      temp.push_back(v[i]);
      ++i;
    }
    else
    {
      temp.push_back(v[j]);
      ++j;
    }
  }

  while (i <= mid){
    temp.push_back(v[i]);
    i++;
  }

  while (j <= end){
    temp.push_back(v[j]);
    j++;
  }

  for (int i = start; i <= end; ++i)
  {
    v[i] = temp[i - start];
  }

}


void MergeSort(std::vector<int> &v, int start, int end)
{
  if (start < end)
  {
    int mid = (start + end) / 2;
    MergeSort(v, start, mid);
    MergeSort(v, (mid + 1), end);
    MergeSortedInterval(v, start, mid, end);
  }
}



int main()
{
  std::vector<int> v = {5,2,6,6,0,-1,4,3};
  MergeSort(v, 0, (v.size()-1));

  for (int i : v)
    std::cout << i << " ";

  std::cin.get();
}
