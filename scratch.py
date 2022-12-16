import functools
import typing
import random
from itertools import takewhile



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

def aux(x, m):
  print(x)
  if x > m:
    return True
  else:
    return False

for z in takewhile(lambda lx: lx >= 50, list(range(1,100))):
  print(z)

# hm, well, you see what I'm trying to do...
# (thinking emoji....)

import random
import numpy as np

def simulated_annealing(f, x0, T=1.0, T_min=0.00001, alpha=0.9, max_steps=1000):
  """
  Implements the simulated annealing algorithm to find the global minimum or maximum of a function.

  Args:
      f: The function to optimize.
      x0: The initial value for the optimization.
      T: The initial temperature for the annealing process.
      T_min: The minimum temperature for the annealing process.
      alpha: The temperature decay rate.
      max_steps: The maximum number of steps to take before ending the optimization.

  Returns:
      The global minimum or maximum of the function.
  """
  x = x0

  # Start the annealing process
  for step in range(max_steps):
      # Calculate the current value of the function
      f_x = f(x)

      # Generate a new random value
      x_new = x + random.uniform(-1, 1)

      # Calculate the value of the function at the new value
      f_x_new = f(x_new)

      # Calculate the change in value of the function
      delta_f = f_x_new - f_x

      # If the new value is better than the current value, always accept it
      if delta_f < 0:
          x = x_new
      else:
          # Calculate the probability of accepting the new value
          p = 2.0**(-delta_f / T)

          # Use the probability to decide whether to accept the new value
          if random.uniform(0, 1) < p:
              x = x_new

      # Decrease the temperature according to the specified decay rate
      T = alpha * T

      # Stop the optimization when the temperature reaches the minimum value
      if T < T_min:
          break
  return x

# Define the function we want to optimize
def f(x):
    return x**2 + 10*np.sin(x)

# Find the global minimum of the function
result = simulated_annealing(f, x0=0, max_steps=100000)

# Print the result
print(result)
