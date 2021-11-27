def lamina_of(n):
  if n > 2:
    return (n - 1) * 4
  else:
    raise Exception(f"n too small n: {n}")

# print(lamina_of(3))
# print(lamina_of(4))
# print(lamina_of(2))

# for n in decreasing_laminae(75):
#   print(n)

laminae = {}

def bad_count_for(n, limit = 1_000_000, acc = []):
  if n == 3:
    acc.append(8)
    return len(acc), sum(acc), acc
  elif n == 4:
    return 2, 36, [12, 20]
  else:
    if sum(acc) > limit:
      return len(acc), sum(acc), acc
    acc.append(lamina_of(n))
    print(n)
    return count_for(n - 2, limit, acc)

def count_for(n, limit = 1_000_000, acc = []):
  if n < 3 or (sum(acc) + lamina_of(n)) > limit:
    return len(acc), sum(acc), acc
  else:
    acc.append(lamina_of(n))
    return count_for(n - 2, limit, acc)
    

def laminae(n):
  for lam in range(2,n):
    yield count_for(lam, 1_000_000, [])

answers = [c[0] for c in list(laminae(250001))] # off by one, I'll never know

# the answer is   1572729
# my program says 1572728

# it is what it is
