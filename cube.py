from dataclasses import dataclass 
import pretty_errors
import typing

print("let's solve a cube...")

@dataclass
class Cube:
  Fs: list
  Bs: list
  Ls: list
  Rs: list
  Us: list
  Ds: list


# basic layout
#       r r r
#       r R r
#       r r r
# b b b w w w g g g
# b B b w W w g G g
# b b b w w w g g g
#       o o o
#       o O o
#       o o o
#       y y y
#       y Y y
#       y y y

# basic index map
#           1  2  3
#           4  5  6
#           7  8  9
# 10 11 12 19 20 21 28 29 30
# 13 14 15 22 23 24 31 32 33
# 16 17 18 25 26 27 34 35 36
#          37 38 39 
#          40 41 42
#          43 44 45
#          46 47 48
#          49 50 51
#          52 53 54

SOLVED_CUBE = "rrrrrrrrrbbbbbbbbbwwwwwwwwwgggggggggoooooooooyyyyyyyyy"
print(len(SOLVED_CUBE))

def make_cube(cubestr):
  # f = orange, u = white, b = red, l = blue, r = green, d = yellow
  bs = cubestr[0:9]
  ls = cubestr[9:18]
  us = cubestr[18:27]
  rs = cubestr[27:36]
  fs = cubestr[36:45]
  ds = cubestr[45:54]
  # print(bs)
  # print(ls)
  # print(us)
  # print(rs)
  # print(fs)
  # print(ds)
  return Cube(fs, bs, ls, rs, us, ds)

print(make_cube(SOLVED_CUBE))

# okay, so python supports multiple assignment, so defining the turns could
# just be as simple as swapping all the actual values in each face in Cube
# not fun, but it would definitely work :)