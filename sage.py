import pretty_errors
import random
import itertools
from dataclasses import dataclass

FACES = {
	0:  "2",
	1:  "3",
	2:  "4",
	3:  "5",
	4:  "6",
	5:  "7",
	6:  "8",
	7:  "9",
	8:  "10",
	9:  "J",
	10: "Q",
	11: "K",
	12: "A"
}

SUITS = {
	0: "♦",
	1: "♣",
	2: "♥",
	3: "♠"
}

# ♦♣♥♠

@dataclass
class Card:
	face: int
	suit: int

	def __repr__(self):
		return f"{FACES[self.face]}{SUITS[self.suit]}"

ace_of_hearts = Card(face=12, suit=2)
print(ace_of_hearts)

