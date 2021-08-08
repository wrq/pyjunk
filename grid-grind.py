class Sq(object):
  def __init__(self,x,y):
    self.x = x
    self.y = y
  
  def __repr__(self):
    # print(f"Sq({self.x}, {self.y})")
    return f"\tSq({self.x}, {self.y})\n"
  
  def __eq__(self, other):
    if self.x == other.x:
      if self.y == other.y:
        return True
    else:
      return False
    
class Map(object):
  def __init__(self):
    self.data = [Sq(0,0)]
  
  def expand(self, sq):
    if not sq in self.data:
      self.data.append(sq)

  def at(self, x, y):
    for sq in self.data:
      if sq.x == x:
        if sq.y == y:
          return sq
    else:
      return None

  def __repr__(self):
    # d = [str(sq) for sq in self.data]
    return "map => \n" + ''.join([str(sq) for sq in self.data])

  def empty_adjacents(self):
    res = set()
    north = [ 0,  1]
    south = [ 0, -1]
    east  = [ 1,  0]
    west  = [-1,  0]
    for sq in self.data:
      north_of = (sq.x + north[0], sq.y + north[1])
      south_of = (sq.x + south[0], sq.y + south[1])
      east_of =  (sq.x +  east[0], sq.y + east[1])
      west_of =  (sq.x +  west[0], sq.y + west[1])
      # check north
      if not self.at(north_of[0], north_of[1]):
        res.add(north_of)
      # check south
      if not self.at(south_of[0], south_of[1]):
        res.add(south_of)
      # check east
      if not self.at(east_of[0], east_of[1]):
        res.add(east_of)
      # check west
      if not self.at(west_of[0], west_of[1]):
        res.add(west_of)
    return res

  def expand_all_adjacents(self):
    for adj in self.empty_adjacents():
      self.expand(Sq(adj[0], adj[1]))
      

M = Map()
M.expand(Sq(0,1))
#M.expand(Sq(1,0))
M.expand(Sq(1,0))

print(M)
#print(M.at(1,1))
print(M.empty_adjacents())
M.expand_all_adjacents()
print(M.empty_adjacents())
M.expand_all_adjacents()
print(M.empty_adjacents())
M.expand_all_adjacents()
print(M.empty_adjacents())

# print(M)


