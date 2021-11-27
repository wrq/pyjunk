import random
import math


def gauss(n):
	if n % 2 == 0:
		return (n + 1) * (n / 2)
	else:
		return n + gauss(n - 1)


def chance(n = 2):
	ticks = 0
	prev  = 0

	while True:
		ticks += n
		if random.randint(1, gauss(n * int(math.sqrt(n)))) == n:
			print(f"ticks: {ticks} prev: {prev} diff: {ticks - prev} n: {n}")
			n += 1
			prev = ticks
		else:
			pass

#chance()

def wrinkle(n):
	tries = 0
	sets  = 0
	res = []

	while sets <= n:
		tries += 1
		a = random.randint(1,10000)
		b = random.randint(1,10000)

		if a == b:
			res.append(tries)
			tries = 0
			sets += 1
		else:
			pass
	return res

#print(sum(wrinkle(10_000)) / 10_000)

def up(max = 100):
	total = 0
	chance = 1
	sets = 0

	while sets <= max:
		a = random.randint(chance, max)
		b = random.randint(chance, max)

		if a == b:
			print(f"set: {sets} chance: {chance} total: {total}")
			total += 1
			chance = 1
			sets += 1
		else:
			total += 1
			chance += 1
	print(total)


# print(up(1234567))

# suppose there are twenty people and they all throw their names
# in a hat. then, they shuffle the hat, and pull out one name each, 
# what is the probability that they all end up with the matching name?

n = 20

names = list(range(1,21))
random.shuffle(names)
print(names)

# wait
# I can use gauss, duh

# wait no
# that's not the cartesian product
# dumb


def cartesian_product(n):
	res = 1
	for x in range(1, n + 1):
		res = res * x
	return res


def name_chance(n = None):
	if n == None:
		n = 20
	print(f"1 in {cartesian_product(n)}")

name_chance(20)