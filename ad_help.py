# import math
# def id_mult_etern(x):
#   return ((1 + (x / 200)) ** (math.log(4, 10) * (1 + (x * 2))))

# print(id_mult_etern(100))

function id_mult_etern(x)
  return ((1 + (BigInt(x) / 200)) ^ (log10(4) * (1 + 2x)))
end

print(id_mult_etern(9000))
