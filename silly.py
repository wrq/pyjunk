import random
import math

def silly(lim):
  nx = 2
  ticks = 0
  while nx <= lim - 2:
    ticks += 1
    kx = int(math.sqrt(nx)) + 1
    remaining = range(1 + kx, lim - nx)
    a = set(random.choices(remaining, k=kx))
    b = set(random.choices(remaining, k=kx))
    #print(a, b, a & b)
    if a & b == a:
      nx += 1
      print(f"moved up to {nx} after {ticks} ticks with {kx} kx")

silly(250)
