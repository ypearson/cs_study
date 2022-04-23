def factorial(num:int) -> int:
  fac = 1
  while num > 0:
    fac *= num
    num-=1
  return fac

def factorial_r(num:int) -> int:
  if num > 0:
    return num * factorial(num-1)
  elif num == 0 or num == 1:
    return 1
  else:
    return None

print(factorial(5))
print(factorial_r(5))
print(factorial_r(1))
print(factorial_r(0))
print(factorial_r(-1))