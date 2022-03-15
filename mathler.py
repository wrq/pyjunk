import itertools

ops = list("+-/*")
digits = list("0123456789")
symbols = ops + digits
op_doubles = [("+", "+"), ("-","-"),("/","/"), ("*","*")]
print(ops, digits, symbols)
print(op_doubles)

def sanity(c):
  if c[0] in ops:
    return False
  if c[5] in ops:
    return False

  for p in itertools.pairwise(c):
    if p in op_doubles:
      return False
    else:
      pass
  return True

all_candidates = []
for c in itertools.product(symbols, repeat = 6):
  if sanity(c):
    all_candidates.append(c)

print(len(all_candidates))

# for x in all_candidates[1:5000]:
#   print(x, sanity(x))