#include <iostream>

int binarySearch(int list[], int item, int left, int right) {
  while(left<=right){
    int mid = (left + right) / 2;
    int guess = list[mid];
    if(guess == item)
      return mid;
    
    if(item < guess)
      right = mid - 1;
    else
      left = mid + 1;
  }
  return -1;
}

int binarySearch_r(int list[], int item, int left, int right){
  if (left<=right){
    int mid = (left + right) / 2;
    int guess = list[mid];
    if(guess == item)
      return mid;

    if (item < guess) 
      return binarySearch_r(list, item, left, mid - 1);
    else
      return binarySearch_r(list, item, mid + 1, right);
  }
  else
    return -1;
}


int main(){
  int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int item1 = 3;
  int item2 = 7;
  int left = 0;
  int right = 9;
  int res1 = binarySearch(list, item1, left, right);
  std::cout << res1 << std::endl;
  int res2 = binarySearch(list, item2, left, right);
  std::cout << res2 << std::endl;
  int res3 = binarySearch_r(list, item1, left, right);
  std::cout << res3 << std::endl;
  int res4 = binarySearch_r(list, item2, left, right);
  std::cout << res4 << std::endl;

}