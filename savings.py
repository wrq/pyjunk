YEAR = 30000
ACCOUNT = 3000

for y in range(1, 31):
	YEAR *= 1.03
	ACCOUNT *= 1.08
	ACCOUNT += (YEAR * 0.10)
	print(y, ACCOUNT)
