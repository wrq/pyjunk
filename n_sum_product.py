import random

def rand_n_sum_product(n = 20):
	data = {"a": 0, "b": 0, "c": 0, "d": 0, "e": 0, "f": 2}
	for _ in range(n):
		data[random.choice(["a","b","c","d","e"])] += 1
	res = 1
	for z in data.values():
		res *= z
	return (res, data)

def trial(n = 20, trials = 1_000_000):
	p, d = rand_n_sum_product(n)
	for _ in range(trials):
		tp, td = rand_n_sum_product(n)
		# keep highest one each iteration
		if tp > p: 
			p, d = tp, td
	return (p, d)

print(trial(200, 5_000_000))