from functools import lru_cache

@lru_cache(maxsize = 64)
def fibonacci(n):
  if n == 1:
    return 1
  elif n == 2:
    return 2
  else:
    return fibonacci(n - 1) + fibonacci(n - 2)

fibs = [fibonacci(c) for c in range(1,33)]
even_fibs = [c for c in fibs if c % 2 == 0]
print(sum(even_fibs))

# neat-o