import random
import statistics

MILLION = 1_000_000

def one_in_x_upto(x: int = 0, upto: int = 1_000_000) -> int:
  for _ in range(upto):
    _a, _b = random.randint(1, x+1), random.randint(1, x+1)
    if _a == _b:
      x = x + 1
  return x

print(statistics.mean([one_in_x_upto(1, 1000000) for _ in range(1000)]))
print(statistics.mean([one_in_x_upto(1 * MILLION, 1000000) for _ in range(1000)]))
print(statistics.mean([one_in_x_upto(2 * MILLION, 1000000) for _ in range(1000)]))
print(statistics.mean([one_in_x_upto(3 * MILLION, 1000000) for _ in range(1000)]))