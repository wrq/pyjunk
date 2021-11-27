import random
import itertools
import more_itertools as more # >:)

dice = [1,2,3,4,5,6]

# diceperms = itertools.combinations_with_replacement(dice, 4)

def pair_sums():
  for perm in diceperms:
    dcombs = more.distinct_combinations(perm, 2)
    yield (perm, list(map(sum, list(dcombs))))

# for e in pair_sums():
#   print(e)

def sum_ratios():
  aux = []
  res = {}
  for psum in pair_sums():
    for e in psum[1]:
      #print(e)
      aux.append(e)
  
  for s in range(2, 13):
    c = aux.count(s)
    l = len(aux)
    res[s] = c, l, (c / l)
  
  return res

# print(sum_ratios())


def sums_from_dice(dice):
  return set(map(sum, list(more.distinct_combinations(dice, 2))))

# print(sums_from_dice((1,2,3,4)))
# {3, 4, 5, 6, 7}

print(dice)

def sum_n_dice(n):
  return sum([random.choice(dice) for _ in range(n)])

#print(sum_n_dice(2))

def dice_fight(x, y):
  xwins = 0
  ywins = 0
  for _ in range(10_000_000):
    xsum = sum_n_dice(x)
    ysum = sum_n_dice(y)

    if xsum > ysum:
      xwins += 1
    if xsum < ysum:
      ywins += 1
    if xsum == ysum:
      pass

  print(f"xwins = {xwins} ywins = {ywins} ratio = {xwins/ywins}")

# dice_fight(2,3)

all_twos = list(more.distinct_combinations([1,2,3,4,5,6] * 2, 2))
all_threes = list(more.distinct_combinations([1,2,3,4,5,6] * 3, 3))

def dice_fight2():
  two_wins = 0
  three_wins = 0
  draws = 0
  for two in all_twos:
    for three in all_threes:
      if sum(two) > sum(three):
        two_wins += 1
      if sum(two) < sum(three):
        three_wins += 1
      if sum(two) == sum(three):
        draws += 1

  print(f"two_wins: {two_wins} three_wins: {three_wins} draws: {draws}")
  total = two_wins + three_wins + draws
  print(f"ODDS - two_wins {two_wins/total} three_wins: {three_wins/total} draws: {draws/total}")

dice_fight2()