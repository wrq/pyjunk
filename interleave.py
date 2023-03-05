import random

def interleave(*iters):
  res = []
  for z in zip(*iters):
    for _,x in enumerate(z):
      res.append(x)
  return res

def split(s: str) -> list[str]:
  return [x for x in s]

def listbench(lstlen, x):
  res = []
  for x in range(x):
    aux = [random.randrange(1,11) for _ in range(lstlen)]
    res.append(aux)
  return res

letters = interleave(split("abc"), split("def"), split("ghi"))
numbers = interleave([1,2,3], [4,5,6], [7,8,9])

print(interleave(letters, numbers))
print(interleave(*listbench(10, 500000)))
