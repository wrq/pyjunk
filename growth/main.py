# from pygame import *
#print("hello game")
from dataclasses import dataclass
from typing import *

@dataclass
class Grid():

  def __init__(self, x, y, initval = None):
    self.data = []
    self.xsize = x
    self.ysize = y

    if initval:
      for ix in range(0, x):
        self.data.append([initval for iy in range(0, y)])
    else:
      for ix in range(0, x):
        self.data.append([None for iy in range(0, y)])
  
  def __repr__(self):
    res = ""
    for j in self.data:
      res += str(j) + "\n"
    return res

  def __getitem__(self, x):
    return self.data[x]
  
  def items(self):
    for ix in range(0, self.xsize):
      for iy in range(0, self.ysize):
        yield (ix, iy, self[ix][iy])

    
MW = Grid(15,15,0)
print(MW)

for x,y,o in MW.items():
  if x == 1 and y == 1:
    MW[x][y] = 5

print(MW)