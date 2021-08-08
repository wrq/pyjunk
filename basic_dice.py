import random
from collections import defaultdict

DIE = [1,2,3,4,5,6]

def zero():
	return 0


def throw_and_count(n = 1_000_000):
	counts = defaultdict(zero)
	for i in range(1, n):
		a = random.choice(DIE)
		b = random.choice(DIE)
		sum = a + b
		counts[sum] += 1

	for k,v in counts.items():
		print(f'{k}     {v}')

throw_and_count(n = 1_000_000)

