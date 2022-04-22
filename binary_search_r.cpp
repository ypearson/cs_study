#include <array>
#include <cstdio>

int deep{};
template<typename T, std::size_t N>
bool binary_search(const std::array<T,N> &arr, T v, int left, int right) {
  
  int mid = (left + right)/2;
  
  if(left <= right ){
    if(v == arr[mid]){
      printf("found @ = %d\n", mid);
      return true;
    }
    else if(v < arr[mid])
      right = mid - 1;
    else
      left = mid + 1;
    return binary_search(arr, v, left, right);
  }
  return false;
}

int main() {

  bool answer{};
  std::array arr{0,1,2,3,4,5,6,7,8,9,10};
  answer = binary_search(arr, 1, 0, arr.size()-1);
  printf("answer = %s\n", answer?"true":"false");
}