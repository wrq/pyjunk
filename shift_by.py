x = [1,2,3,4,5,6,7,8,9]

def shift_by(l, n):
  return l[n:] + l[:n]

print(shift_by(x,  3))
print(shift_by(x, -3))

# aint that nice... 