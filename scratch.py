import functools
import typing
import random



def big_as():
  a = [1,2,3,4,5]
  for a in a:
    if a > 5:
      yield a

a = [1,2,3]
b = [4,5,6]
c = zip(a,b)

@functools.lru_cache(256)
def gauss(n):
  if n % 2 == 0:
    return (n + 1) * (n / 2)
  else:
    return n + gauss(n - 1)
  

# print(gauss(10000))

@functools.lru_cache(256)
def fibonacci(n):
  if n == 0:
    return 0
  elif n == 1:
    return 1
  else:
    return fibonacci(n - 2) + fibonacci(n - 1)

# print(fibonacci(300))

def cube_levels(n):
  for x in range(1, n):
    print(f"x: {x} cube: {x ** 3} level: {(x ** 3) * gauss(x)}")

## cube_levels(20)

def badtype(x: int) -> str:
  return x * 2

badtype(4)



def bogobench(maxn = 50):
  for i in range(2, maxn):
    count = 0
    sorted = list(range(i))
    sorted.sort()
    shuffled = random.sample(sorted, k=len(sorted)) # shuffle immutable
    while not sorted == shuffled:
      shuffled = random.sample(sorted, k=len(sorted))
      count += 1
    else:
      print(f"n = {i} :: count = {count} ::  {shuffled}")

# bogobench(15)

