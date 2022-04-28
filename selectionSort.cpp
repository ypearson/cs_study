#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <algorithm>

using std::size_t;
using std::array;

int getRandom(void) {
  return rand()%150;
}

template<typename T, std::size_t N>
void randArray(std::array<T,N> &arr) {
  for(std::size_t i{}; i < arr.size(); i++)
    arr[i] = getRandom();
}

template<typename T, size_t N>
int findMax(std::array<T,N> &arr, size_t start ) {
  return std::max_element(arr.begin()+start, arr.end()) - arr.begin();
}
template<typename T, size_t N>
int findMin(std::array<T,N> &arr, size_t start ) {
  return std::min_element(arr.begin()+start, arr.end()) - arr.begin();
}

template<typename T, std::size_t N>
int find_min(const std::array<T,N> &arr, int start) {
  int index{start};
  if(start <= arr.size()-1 && arr.size() > 0) {
    T min_value = arr[start];
    for(int i{start}; i<arr.size(); i++) {
      if(min_value > arr[i]){
        index = i;
        min_value = arr[i];
      }
    }
  }
  return index;
}

template<typename T, size_t N>
void swap(std::array<T,N> &arr, size_t i1, size_t i2) {
  if(i1 < arr.size() && i2 < arr.size() && i1 != i2) {
    T tmp = arr[i1];
    arr[i1] = arr[i2];
    arr[i2] = tmp;
  }
}

template<typename T, size_t N>
void selectionSort(std::array<T,N> &arr) {

  for(int i{}; i < arr.size(); i++) {
    size_t si = findMin(arr, i);
    swap(arr,i,si);
  }
}

template<typename T, size_t N>
void selectionSort_r(array<T,N> &arr, size_t i) {

  if(i < arr.size()) {
    size_t s = findMin(arr, i);
    swap(arr, s, i);
    selectionSort_r(arr,++i);
  }
  
}

int main() {
  
  srand (time(NULL));
  std::array<int,10> arr{};
  randArray(arr);
  
  for(int x:arr) {
    std::cout << x << ", ";
  }
  std::cout << std::endl;

  selectionSort_r(arr, 0);

  for(int x:arr) {
    std::cout << x << ", ";
  }
  std::cout << std::endl;

}