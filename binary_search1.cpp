#include <array>
#include <cstdio>

template<typename T, std::size_t N>
bool binary_search(const std::array<T,N> &arr, T value) {

  std::size_t left{};
  std::size_t right{arr.size()-1};
  std::size_t mid{right>>1};

  while(left <= right) {

    if(arr[mid] == value) {
      printf("found it @ mid = %lu\n", mid);
      return true;
    } else if(value > arr[mid]) {
      left = mid + 1;
      mid = (left + right) >> 1;
      printf("%lu %lu %lu\n", left,right,mid);
      }
      else {
        right = mid;
        mid = (left + right) >> 1;
        printf("%lu %lu %lu\n", left,right,mid);
      }
    }
  return false;
  }

int main() {

  std::array arr{0,1,2,3,4,5,6,7,8,9,10,11};
  bool answer{binary_search(arr,1)};
  return 0;
}
