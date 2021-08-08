# count junk
import random

def countjunk(n = 1000000, current = 0, total = 0):
  if n == 1:
    exit()
  total   = total   + 1
  current = current + 1
  aux = [x for x in range(0,n)]
  a_guess = random.choice(aux)
  b_guess = random.choice(aux)

  if a_guess == b_guess:
    print(f"n = {n} :: current = {current} :: total = {total}")
    countjunk(n - 1, 0, total)
  else:
    countjunk(n, current, total)

# countjunk(10)

def gauss(g):
  if g % 2 == 0:
    return (g + 1) * (g / 2)
  else:
    return g + gauss(g - 1)

def newjunk(n = 1000000, current = 0, total = 0):
  g = 1
  while True:
    current = current + 1
    total   = total   + 1

    # aux = list(range(0,n))
    a_guess = random.randrange(0, n)
    b_guess = random.randrange(0, n)

    if a_guess == b_guess:
      print(f"n = {n} :: current = {current} :: total = {total}")
      current = 0
      n = round(n + gauss(g))
      g = g + 1
    else:
      pass

newjunk(2, 0, 0)