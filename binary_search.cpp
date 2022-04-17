#include <cstdio>
#include <array>

using std::size_t;
template<typename T, std::size_t N>
bool binary_search(const std::array<T,N> &arr, T value) {

  int cnt{};
  int low{};
  int high = arr.size()-1;

  while(low <= high) {

    int mid = (high+low) >> 1;
    printf("mid=%d\n", mid);
    if(value == arr[mid]) {
      printf("found @ mid = %d\n",mid);
      return true;
    }
    else if(arr[mid] < value) {
      low = mid+1;
      printf("L%d H%d M%d\n",low,high,mid);
    }
    else {
      high = mid-1;
      printf("L%d H%d M%d\n",low,high,mid);
    }
    if(++cnt>7)
      break;
  }
  return false;
}

int main() {
  bool answer{};
  std::array<double,12> arr1{0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0};
  answer = binary_search(arr1, 11.0);
  printf("answer = %s\n\n", answer?"true":"false");
}
