# the task is to make change. 
# given make_change(55.55, [50,20,10,5,1,0.25,0.1,0.05,0.01]):
#   we would want to see:
#   50 x 1
#    5 x 1
# 0.25 x 2
# 0.05 x 1

from decimal import *

def make_change(amount: Decimal, denoms: list[Decimal], res: list[Decimal] = None):
  if res is None:
    res = []

  if sum(res) == amount:
    return res
  else:
    denoms.sort()
    #print(f"sum: {sum(res)}")
    diff = amount - sum(res)
    change = max(filter(lambda d : d <= diff, denoms))
    #print(f"diff: {diff}")
    #print(f"change: {change}")
    res.append(change)
    #print(res)
    return make_change(amount, denoms, res)

print(make_change(Decimal('55.55'), [Decimal(z) for z in ['50','20','10','5','1','0.25','0.1','0.05','0.01']]))

