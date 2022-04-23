#F0 = 0, F1 = 1
#Fn = Fn-1 + Fn-2

def fibonacci(n:int) -> int:
  if n==0:
    return 0
  if n==1:
    return 1
  elif n > 1:
    return fibonacci(n-1)+fibonacci(n-2)

memo = {}
memo[0] = 0

def fibonacci_dp(n:int) -> int:
  if n==0:
    return 0 
  if n==1:
    return 1
  elif n > 1:
    if n-1 in memo.keys():
      return memo[n-1] + memo[n-2]
    else:
      memo[n-1] = fibonacci_dp(n-1)
    return memo[n-1]+fibonacci_dp(n-2)

print(fibonacci_dp(20))
print(memo)