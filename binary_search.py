from typing import List

def binary_search(arr:List[int], value: int) -> bool:
 
    left = 0
    right = len(arr)-1
    while left <= right:
      mid = (left+right)//2
      print(f'{left} {right} {mid}')
      if value == arr[mid]:
        print(f'found @ {mid}')
        return True
      elif value < arr[mid]:
        right = mid - 1
      else:
        left = mid + 1
    return False


def binary_search_r(arr:List[int], value:int, left:int, right:int) -> bool:
  mid = (left+right)//2
  print(f'{left} {right} {mid}')
  if left <= right:
    if value == arr[mid]:
      print(f'found @ {mid}')
      return True
    elif value < arr[mid]:
      right = mid - 1
    else:
      left = mid + 1
    return binary_search_r(arr, value, left, right)
  else:
    return False

arr = [0,1,2,3,4,5,6,7,8,9,10]

print(binary_search_r(arr,11, 0, len(arr)-1))