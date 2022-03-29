# DIFFERENTIALS = [(32, 1), (35, 1.12), (41, 1.5), (51, 2)]

# def calculate(hrs, diffs, rate):
# 	res = 0
# 	h = 0

# 	for d in diffs:
		
# 		if h >= 1:
# 			res += (h * rate * d[1]) # res is the total pay
# 			h -= d[0] # subtract the differential from remaining hrs

# 	return res

# print(calculate(60, DIFFERENTIALS, 12))

def calculate(hrs: int, rate: int):
	if hrs > 32:
		return (32 * rate) + ((hrs - 32) ** 1.2) * rate
	else:
		return hrs * rate

# print(calculate(30, 15))
# print(calculate(40, 15))
# print(calculate(50, 15))

for x in range(10,120,10):
	print(calculate(x, 15))

