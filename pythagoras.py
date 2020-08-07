import itertools

def pyth_triples(n):
  for combo in itertools.combinations(list(range(n + 1))[1:], 3):
    if (combo[0] ** 2 + combo[1] ** 2) == combo[2] ** 2:
      yield combo

for e in pyth_triples(1500):
  print(e)

