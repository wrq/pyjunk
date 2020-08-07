import random
import statistics
import itertools

def roll(d = 6):
  return random.randint(1, 6)

def roll_n(n = 6, d = 6):
  return [roll(d) for e in range(n)]

#print(roll(d = 20))
#print(roll_n(n = 6, d = 6))

def count_yahtzee():
  c = 0
  roll = roll_n()
  while not len(set(roll)) == 1:
    c = c + 1
    roll = roll_n()
  else:
    #print(roll)
    #print(f"yahtzee after {c} rolls")
    return c

def million_yahtzee_stats():
  m = statistics.mean([count_yahtzee() for x in range(100)])
  print(f"average number of first rolls until yahtzee was {m}")

# million_yahtzee_stats()

def roll_dict(roll):
  res = {}
  s = set(roll)
  for die in s:
    res[die] = roll.count(die)
  return res

# print(roll_dict(roll_n(n = 6, d = 6)))

def is_full_house(roll):
  rset = set(roll)
  if len(rset) == 2:
    if roll.count(roll[0]) == 3 or roll.count(roll[0]) == 2:
      return True
  else:
    return False

fh_roll = [1,3,2,3,1]

print(is_full_house(fh_roll))