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


a = unique_letters("flesh")
b = unique_letters("shelf")
print(f"a == b : {a == b}")

print(f"raise <- exclusive -> grout: {is_exclusive_to('raise', 'grout')}")
# print(exclusive_pairs())
# print(targets)


def generate_wordpair():
    alpha = random.choice(targets)
    alpha_exclusives = [word for word in targets if is_exclusive_to(alpha, word)]
    if len(alpha_exclusives) == 0:
        return generate_wordpair()
    else:
        beta = random.choice(alpha_exclusives)
    print(f"alpha, beta = {alpha}, {beta}")
    return (alpha, beta)


def xordle():
    print("new xordle ~~~")
    alpha, beta = generate_wordpair()


xordle()
