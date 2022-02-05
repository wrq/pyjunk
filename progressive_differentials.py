DIFFERENTIALS = [(32, 1), (35, 1.12), (41, 1.5), (51, 2)]

def calculate(hrs, diffs, rate):
	res = 0
	h = 0

	for d in diffs:
		
		if h >= 1:
			res += (h * rate * d[1]) # res is the total pay
			h -= d[0] # subtract the differential from remaining hrs

	return res

print(calculate(60, DIFFERENTIALS, 12))