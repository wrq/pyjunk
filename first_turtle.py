import turtle
import random

colors = ["red","blue","green","yellow","purple"]

def nbag(n, c):
  res = []
  for i in range(n):
    res.append(random.choice(c))
  return res

t = turtle.Turtle()

hundred_colors = nbag(100, colors)

for c in hundred_colors:
  t.color(c)
  t.forward(random.randrange(1,10))
  t.left(random.randrange(1,90))

#for c in ['red', 'green', 'yellow', 'blue']:
#    t.color(c)
#    t.forward(75)
#    t.left(90)