import json
import random
from dataclasses import dataclass
from collections import defaultdict
from functools import cache
from typing import *

jdictionary = json.loads(open("fives_dictionary.json").read())
jtargets = json.loads(open("fives_targets.json").read())

targets = [t for t in jtargets if t != "*****"]
dictionary = [d for d in jdictionary if d != "*****"]


def unique_letters(word: str) -> list[str]:
    return sorted(list(set([letter for letter in word])))


@cache
def is_exclusive_to(word: str, other: str) -> bool:
    if word < other:
        is_exclusive_to(other, word)
    elif set(unique_letters(word)).intersection(set(unique_letters(other))) == set():
        return True
    else:
        return False


def exclusive_pairs():
    res = defaultdict(lambda: set())
    for word in targets:
        for other in targets:
            if is_exclusive_to(word, other):
                res[word].add(other)
                res[other].add(word)
    return res


# a = unique_letters("flesh")
# b = unique_letters("shelf")
# print(f"a == b : {a == b}")

# print(f"raise <- exclusive -> grout: {is_exclusive_to('raise', 'grout')}")
# # print(exclusive_pairs())
# # print(targets)


def generate_wordpair(alpha):
    alpha_exclusives = [word for word in targets if is_exclusive_to(alpha, word)]
    if len(alpha_exclusives) == 0:
        return generate_wordpair(random.choice(targets))
    else:
        beta = random.choice(alpha_exclusives)
    #print(f"alpha, beta = {alpha}, {beta}")
    return (alpha, beta)

def generate_all_pairs_for(alpha):
    return [beta for beta in targets if is_exclusive_to(alpha, beta)]

def all_valid_pairs():
    res = []
    for alpha in targets:
        _pairs = generate_all_pairs_for(alpha)
        for beta in _pairs:
            res.append((alpha, beta))
    return res
    
def xordle():
    print("new xordle ~~~")
    alpha, beta = generate_wordpair(random.choice(targets))


xordle()

#print(len(all_valid_pairs()))

class Constraint:
    pass

class NotLetterInColumn(Constraint):
    def __init__(self, letter: str, col: int):
        self.letter = letter
        self.column = col
    def __call__(self, against: str):
       #print(self.letter, self.column, against)
       return against[self.column - 1] != self.letter

class LetterInColumn(Constraint):
    def __init__(self, letter: str, col: int):
        self.letter = letter
        self.column = col
    def __call__(self, against: str):
        return against[self.column - 1] == self.letter

class LetterPresent(Constraint):
    def __init__(self, letter: str):
        self.letter = letter
    def __call__(self, against: str):
        return self.letter in against

class LetterNotPresent(Constraint):
    def __init__(self, letter: str):
        self.letter = letter
    def __call__(self, against: str):
        return self.letter not in against

def process_guess(guess: str, word: str):
    res = []
    for index, letter in enumerate(guess):
        if letter == word[index]:
            res.append(("green", letter))
        elif letter in word and word[index] != letter and guess[:index + 1].count(letter) <= word.count(letter):
            res.append(("yellow", letter))
        elif letter in word and word[index] != letter and guess[:index + 1].count(letter) >  word.count(letter):
            res.append(("grey", letter))
        elif letter not in word:
            res.append(("grey", letter))
    return res

def process_xor_guess(guess: str, a: str, b: str):
    a_res = process_guess(guess, a)
    b_res = process_guess(guess, b)
    res = []
    for a,b,g in zip(a_res, b_res, guess):
        if a[0] == 'green' or b[0] == 'green':
            res.append(('green', g))
            continue
        if a[0] == 'yellow' or b[0] == 'yellow':
            res.append(('yellow', g))
            continue
        if a[0] == 'grey' or b[0] == 'grey':
            res.append(('grey', g))
    return res    

print(process_xor_guess("davet", "dulls", "covet"))        



# guess: event
# word:  duvet
# print(process_guess("event", "duvet")) 
# [('yellow', 'e'), ('yellow', 'v'), ('grey', 'e'), ('grey', 'n'), ('green', 't')]

# not_z_second_col = NotLetterInColumn("z", 2)
# not_z_fourth_col = NotLetterInColumn("z", 4)
# print(not_z_second_col("pizza")) #      true
# print(not_z_fourth_col("pizza")) #      false
# i_second_col = LetterInColumn("i", 2) 
# print(i_second_col("pizza")) #          true
# i_fourth_col = LetterInColumn("i", 4)
# print(i_fourth_col("pizza")) #          false
# has_no_z = LetterNotPresent("z")
# print(has_no_z("pizza")) #              false
# print(has_no_z("court")) #              true
# has_z = LetterPresent("z")
# print(has_z("pizza")) #                 true
# print(has_z("court")) #                 false


