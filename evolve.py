import random

class VM:
  def __init__(self, program):
    self.program = program
    self.slots = {"A": 0, "B": 0, "C": 0, "D": 0, "E": 0, "F": 0}

  def clear_memory(self):
    self.slots = {"A": 0, "B": 0, "C": 0, "D": 0, "E": 0, "F": 0}
  
  def execute_instruction(self, instr):
    if instr.name == 'INC':
      self.slots[instr.args[0]] += 1
    elif instr.name == 'DEC':
      self.slots[instr.args[0]] -= 1
    elif instr.name == 'MUL':
      self.slots[instr.args[0]] = int(self.slots[instr.args[0]]) * int(instr.args[1])

  def run(self):
    for e in self.program:
      self.execute_instruction(e)

  def mutate_program(self, argrange):
    self.program[random.randrange(len(self.program))] = random_instruction(argrange)

class Instruction:
  def __init__(self, instr, *instr_args):
    self.name = instr
    self.args = instr_args
  
  def generate_random(self):
    pass
    
# workfile = list(open("example.evm").readlines())
# workfile = [line.rstrip('\n') for line in workfile]
# workfile = [Instruction(instr.split(" ")[0], *instr.split(" ")[1:]) for instr in workfile]

# for instr in workfile:
#   print(instr.name, instr.args)

# my_vm = VM(workfile)
# for instr in my_vm.program:
#   my_vm.execute_instruction(instr)

# print(my_vm.slots)
# alright, so that works. let's evolve a program then.

# argrange is the limit of what an argument for an instruction can be
# we'll keep it low for now, eventually I suppose it'll be 255??

def random_instruction(argrange):
  p = random.choice(['INC', 'DEC', 'MUL'])
  r = random.choice(['A', 'B', 'C', 'D', 'E', 'F'])
  if p == 'INC':
    return Instruction('INC', r)
  elif p == 'DEC':
    return Instruction('DEC', r)
  elif p == 'MUL':
    return Instruction('MUL', r, random.randint(0, argrange))

def random_instructions(maxlength, argrange):
  res = []
  for _i in range(0, maxlength):
    res.append(random_instruction(argrange))
  return res

goal = {'A': 10, 'B': 20, 'C': 30, 'D': 40, 'E': 50, 'F': 60}

def old_fitness(goal, current):
  keys = ['A', 'B', 'C', 'D', 'E', 'F']
  return [goal[key] == current[key] for key in keys].count(True)

def fitness(goal, current):
  keys = ['A', 'B', 'C', 'D', 'E', 'F']
  return sum([abs(goal[key] - current[key]) for key in keys])

# adam = random_instructions(20, 20)
# my_vm = VM(adam)
# print(my_vm.slots)
# my_vm.run()
# print(my_vm.slots)
# print(fitness(goal, my_vm.slots))
# my_vm.mutate_program(20)
# my_vm.clear_memory()
# my_vm.run()
# print(my_vm.slots)
# my_vm.slots['A'] = 10
# print(my_vm.slots)
# print(fitness(goal, my_vm.slots))

def mutate_loop(n = 1_000_000, mutations = 1):
  aux = VM(random_instructions(100,2))
  aux.run()
  res = VM(random_instructions(100,2))

  for ns in range(n):
    for ms in range(random.randrange(1,mutations + 1)):
      res.mutate_program(10)
    
    aux.program = res.program
    aux.clear_memory()
    aux.run()
    
    aux_fit  = fitness(goal, aux.slots)
    res_fit = fitness(goal, res.slots)
    #print(aux_fit, res_fit)

    if fitness(goal, res.slots) == 0:
      return fitness(goal, res.slots), res.slots
    elif aux_fit < res_fit:
      print(f"new fitness is {aux_fit}")
      res.program = aux.program
      res.clear_memory()
      res.run()
    elif aux_fit > res_fit:
      pass
      #print("fitness was worse")
      
  return fitness(goal, res.slots), res.slots

print(mutate_loop(n = 500_000_000, mutations = 5))
