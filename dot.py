import random

def dots(n = 100):
	res = ""
	for i in range(1, n + 1):
		if i <= random.randint(1, n):
			res += "."
		else:
			break
	return res

data = [len(dots(100)) for _ in range(1, 1_000_000 + 1)]
print(f"average is {sum(data) // 1000000}")