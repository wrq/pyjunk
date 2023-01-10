import random
import typing

def roll(n: int) -> list[int]:
  return sorted([random.choice([1,2,3,4,5,6]) for _ in range(n)])

