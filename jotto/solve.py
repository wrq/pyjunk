from functools import cache
from typing import *
from tqdm import tqdm
import networkx as nx
import itertools
import random
import json


def unique_letters(word):
    return sorted(list(set([letter for letter in word])))

@cache
def is_exclusive_to(word, other):
    if word < other:
        is_exclusive_to(other, word)
    elif set(unique_letters(word)).intersection(set(unique_letters(other))) == set():
        return True
    else:
        return False

def fitness(word_list):
    return len(set([c for c in "".join(word_list)]))

def generate_random_population(n, words):
    return [random.sample(words, 5) for x in range(n)]

def mutate_candidate(c):
    # candidate is just a list of 5 strings
    res = list.copy(c)
    res.remove(random.choice(res))
    res.append(random.choice(words))
    return res

def most_fit(pop, n=50):
    sorted_pop = sorted(pop, key=fitness, reverse=True)
    return sorted_pop[:n]

def evolve(n, words):
    finished   = False
    highest    = 0
    population = generate_random_population(n, words)
    while not finished:
        elites = most_fit(population, 25000)
        babies = generate_random_population(25000, words)
        legacy = random.choices(population, k = n - 50000)
        legacy = [mutate_candidate(c) for c in legacy]
        population = elites + babies + legacy
        assert len(population) == n
        # logic
        gen_highest = max(population, key=fitness)
        if fitness(gen_highest) > highest:
            highest = fitness(gen_highest)
            print(f"new highest is {highest}: {gen_highest}")
        if highest == 25:
            finished = True
            print(f"solution: {gen_highest}")

# pop = generate_random_population(5)
# print([(fitness(p), p) for p in pop])
# new_pop = list(map(mutate_candidate, pop))
# print([(fitness(p), p) for p in new_pop])
# combined = [max([pair[0], pair[1]], key=fitness) for pair in zip(pop, new_pop)]
# print([(fitness(p), p) for p in combined])

aux_words = open("words.txt").read().split("\n")
words = []
for word in aux_words:
    if len(unique_letters(word)) == 5:
        words.append(word)

def build_graph():
    res = nx.Graph()
    for w in words:
        res.add_node(w)
    for wordnode in tqdm(res.nodes()):
        for word in words:
            if is_exclusive_to(wordnode, word):
                res.add_edge(wordnode, word)
    return res

print(f"{len(words)} words...")
#evolve(1_000_000, words)

# with open("out.json", mode="w") as j:
#     j.write(json.dumps(build_graph()))

# TODO: try writing this differently... I don't have enough ram on this machine
# to be able to build this big giant graph. maybe each word can have its neighbors in
# a json file and then use jq or some tool like that to merge them all into a big dictionary?