#include <iostream>

unsigned long factorial(unsigned long num) {
  unsigned long fac = 1;
  while(num > 0) {
    fac *= num;
    num--;
  }
  return fac;
}

unsigned long factorial_r(unsigned long num) {

  if(num > 0) {
    return num*factorial_r(num-1);
  }
  else
    return 1;
}

int main() {

  std::cout << factorial(5) << std::endl;
  std::cout << factorial_r(5) << std::endl;  
}
