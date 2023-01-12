#include <iostream>
#include <vector>

void InsertionSort(std::vector<int> &v)
{
  for (int j = 1; j <= v.size() - 1; j++)
  {
    int key = v[j];
    int i = j - 1;
    while (i >= 0 and v[i] > key)
    {
      v[i+1] = v[i];
      i--;
    }
    v[i+1]= key;
  }
}

int main()
{
  std::vector<int> v = {5,2,6,6,0,-1,4,3};
  InsertionSort(v);
  for (int i : v)
    std::cout << i << " ";

  std::cin.get();
}