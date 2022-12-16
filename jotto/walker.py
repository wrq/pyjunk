import random
from collections import deque
from functools import cache

def unique_letters(word):
    return sorted(list(set([letter for letter in word])))

def fitness(word_list):
    return len(set([c for c in "".join(word_list)]))

@cache
def words_exclusive_to(subj):
    return [word for word in words if subj[0] not in word and subj[1] not in word and subj[2] not in word and subj[3] not in word and subj[4] not in word]


aux_words = open("words.txt").read().split("\n")
words     = []
# process the duplicate words
for word in aux_words:
    if len(unique_letters(word)) == 5:
        words.append(word)

class Walker():
    def __init__(self):
        self.history = deque([], 5)
        self.alive = True
        self.visits = 0

    def visit(self):
        self.visits += 1
        if self.visits % 10000 == 0:
            print(f"id: {id(self)} visits: {self.visits/1000000}M")
        #print(list(self.history))
        if len(self.history) == 0:
            self.history.append(random.choice(words))
        else:
            self.history.append(random.choice(words_exclusive_to(self.history[-1])))
            if fitness(list(self.history)) == 25:
                print(f"solution: {list(self.history)}, visits: {self.visits}")
                self.alive = False

def walk(n = 500):
    finished = False
    population = [Walker() for x in range(n)]
    while not finished:
        for walker in population:
            walker.visit()
            if not walker.alive:
                finished = True

walk()