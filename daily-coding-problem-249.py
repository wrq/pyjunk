import itertools
import random

# find maximum xor between any two numbers, given a list.

test_list = list(range(1,200))
random.shuffle(test_list)

def max_xor(lst):
    res = (0, None, None)
    for a,b in itertools.combinations(lst, 2):
        if res[0] < a ^ b:
            res = (a ^ b, a, b)
    return res

print(max_xor(test_list))

# naively, this makes sense. just take all the pairs, keep the max.
# perhaps a smarter way might be to basically rabbit hunt for the inverted
# bitstring, as an int? but that will only catch the best case scenario