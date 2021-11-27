import random
import re

GRAMMAR = { 
  "START": "I will have one <order>",
  "<order>": ["<coffee> and <pastry>", "<coffee> and <pastry>", "<coffee> <stars>", "<coffee> <another>"],
  "<another>": ["and a <coffee> <another>", "and a <coffee>"],
  "<stars>": "and I want to use my stars for a cake pop.",
  "<coffee>": ["hot coffee", "iced coffee", "vanilla latte", "chai latte"],
  "<pastry>": ["muffin", "brownie", "lemon loaf"]
}

TOKEN = re.compile(r"<[\w]+>")

def gramreplace(m):
  gx = GRAMMAR[m.group(0)]
  if isinstance(gx, list):
    return random.choice(gx)
  else:
    return gx


# print(GRAMMAR["START"])

def match(gr, txt = None):
  if not txt:
    txt = gr["START"]
  if not TOKEN.search(txt):
    return txt
  else:
    mx = TOKEN.sub(gramreplace, txt)
    return match(GRAMMAR, mx)


x = match(GRAMMAR)
for _ in range(1, 1000):
  m = match(GRAMMAR)
  print(len(m))
  if len(m) > len(x):
    x = m
  #print(match(GRAMMAR))

print(x, len(x))