import random
from dataclasses import dataclass

s = "everyone should have food water shelter and healthcare"

print("".join([f" :sm64_{c}:" for c in s if c in "abcdefghijklmnopqrstuvwxyz"]))

def zz():
    res = []
    for x in range(100):
        res.append(f":zz{(str(x).zfill(2))}: ")
    print("".join(res))

zz()