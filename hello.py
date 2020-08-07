import itertools as itr

def greet(whom = "user"): # def for shit, default args, stupid colon 
    print("hello, {0}".format(whom))
# but no end keyword, neat

def dump():
  with open("hello.py") as h:
      for line in h.readlines():
        print(line, end = "")

def isloud(str):
  if str.count("!") >= 1:
    return True
  else:
    return False

# print(isloud("hayden!"))
# print(isloud("hayden"))
class Person:
  def __init__(self, name):
    self.name = name
    if name == "Hayden":
      print("It's him.")

class Hayden(Person):
  def __init__(self, name):
    super(Person, self)

class Animal:
  def __init__(self, name):
    self.name = name

  def bark(self):
    print("animal bark")

class Dog(Animal):
  def bark(self):
    print("dog bark")

fido = Dog("fido")
fido.bark() # okay, makes sense

# nums = list(range(1, 1001))

# for c in itr.combinations(nums, 3):
#   if (c[0] ** 2) + (c[1] ** 2) == (c[2] ** 2):
#     print(c)

WORK = open("bta.txt", "r").readlines()
print(WORK)