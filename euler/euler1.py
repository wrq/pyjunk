threes = list(range(3,1000,3))
fives =  list(range(5,1000,5))
both = fives + threes
print(sum(set(both)))