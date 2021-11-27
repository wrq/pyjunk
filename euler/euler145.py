import re

def count_nums(max = 1_000_000_000):
	res = 0
	for i in range(1, max):
		num = str(i)
		reversed = str(i)[::-1]
		if reversed[0] == "0":
			continue
		sum = int(num) + int(reversed)
		if not re.findall(r'[24680]', str(sum)):
			res += 1
			# print(res, num, reversed, sum)
	return res


print(count_nums(1_000_000_000))