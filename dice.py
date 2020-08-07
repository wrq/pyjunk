import itertools
import more_itertools as more # >:)

dice = [1,2,3,4,5,6]

diceperms = itertools.combinations_with_replacement(dice, 4)

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

print(sum_ratios())


def sums_from_dice(dice):
  return set(map(sum, list(more.distinct_combinations(dice, 2))))

# print(sums_from_dice((1,2,3,4)))
# {3, 4, 5, 6, 7}