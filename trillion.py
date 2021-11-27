import random
import pretty_errors

TRILLION = 1_000_000_000_000

def tri():
	total = 0
	res = False

	while res == False:
		a = random.randint(1, TRILLION)
		b = random.randint(1, TRILLION)
		if a == b:
			print(total)
			res = True

tri()