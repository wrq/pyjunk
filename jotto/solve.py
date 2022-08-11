from functools import cache
import itertools
import random


def unique_letters(word):
    return sorted(list(set([letter for letter in word])))

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
    return sorted(pop, key=fitness, reverse=True)[:n]

def evolve(n, words):
    finished   = False
    highest    = 0
    gen        = 0
    population = generate_random_population(n, words)
    while not finished:
        gen += 1
        
        print(f"gen: {gen} highest: {highest} pop_size: {len(population)}")
        
        elites = most_fit(population, 25000)
        babies = generate_random_population(25000, words)
        worsen = [mutate_candidate(c) for c in list.copy(elites)]
        legacy = random.choices(population, k = (n - 75000) + (100 * gen))
        legacy = [mutate_candidate(c) for c in legacy]
        
        population = elites + babies + legacy + worsen

        gen_highest = max(population, key=fitness)
        
        if fitness(gen_highest) > highest:
            highest = fitness(gen_highest)
            print(f"new highest is {highest}: {gen_highest}")
        if highest == 25:
            finished = True
            print(f"solution: {gen_highest}")

aux_words = open("words.txt").read().split("\n")

words = []
for word in aux_words:
    if len(unique_letters(word)) == 5:
        words.append(word)

print(f"{len(words)} words to start with...")
evolve(100_000, words)

