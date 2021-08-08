import pretty_errors
import sys
import re
from typing import *


#DATA = open(sys.argv[1]).read().split(" ")
#DATA = [re.sub('[\n\t\[\]()]', "", word) for word in DATA] # ew, yuck :/
#print(DATA)


# Enumerable#each_chunk, basically

def n_chunks_of(n, of):
	of_len = len(of)
	print(of_len)
	for idxs in zip(range(0, of_len + 1), range(n, of_len + 1)):
		print(f'idxs :: {idxs}')
		yield of[idxs[0]:idxs[1]]

a = [1,2,3,4,5,6,7,8,9,10]

for chunk in n_chunks_of(2, a):
	print(chunk)
