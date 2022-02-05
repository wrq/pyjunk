from toolz import itertoolz

a = [i for i in range(1, 101)]
for x in itertoolz.sliding_window(3, a):
  print(x)