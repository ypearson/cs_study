#include <array>
#include <cstdio>

std::array arr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

template <typename T, std::size_t N>
bool binary_search(const std::array<T, N> &arr, T value) {
  int left{};
  int right = arr.size() - 1;
  int mid = arr.size() >> 1;
  int cnt{};

  while (left <= right) {
    if (arr[mid] == value) {
      printf("index = %d\n", mid);
      return true;
    } else if (value > arr[mid]) {
      left = mid + 1;
      mid = (left + right) >> 1;
      printf("%d %d %d\n", left, right, mid);
    } else {
      right = mid + 1;
      mid = (left + mid) >> 1;
      printf("%d %d %d\n", left, right, mid);
    }
    if (++cnt > 5) break;
  }

  return false;
}

int main() {
  bool answer = binary_search(arr, 12);

  printf("answer %s\n", answer ? "true" : "false");

  return 0;
}
