# there's 10080 minutes in a week
# 10080 / 3 => 3360

# so then, let's try out a little magic card bonus function

import itertools
import scratch

#print(scratch.gauss(3360))
chances = [x + 1 for x in range(3360)]
chances = [x/2592000 for x in chances]
#print(list(enumerate(itertools.accumulate(chances))))