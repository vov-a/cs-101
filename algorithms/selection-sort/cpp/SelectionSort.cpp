#include <iostream>
#include <vector>

int findMinIndex(std::vector<int> &v)
{
  int min_element = v[0];
  int min_index = 0;
  for (int i = 1; i < v.size(); i++)
    {
      if (v[i] < min_element)
      {
        min_element = v[i];
        min_index = i;
      }
    }
  return min_index;
}

std::vector<int> SelectionSort(std::vector<int> &v)
{
  std::vector<int> result_list;
  for (int x : v)
  {
    int min_index= findMinIndex(v);
    result_list.push_back(v[min_index]);
    v.erase(v.begin() + min_index);
  }

  return result_list;
}


int main()
{
  std::vector<int> v = {5,2,6,6,0,-1,4,3};
  std::vector<int> r = SelectionSort(v);
  for (int i : r)
    std::cout << i << " ";

  std::cin.get();
}
