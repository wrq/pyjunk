import typing
import random

class Cat:
  def __init__(self, name = "kitty", age = 1):
    self.name = name
    self.age  = age

class Dog:
  def __init__(self, name = "doggo", age = 1):
    self.name = name
    self.age  = age

def make_dog_of_random_age(n) -> Dog:
  return Dog("rando", random.randint(1,n))  

a = make_dog_of_random_age(10)
b = make_dog_of_random_age(50)
print(a, b)