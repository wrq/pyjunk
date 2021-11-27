import pretty_errors
import random
import itertools
from dataclasses import dataclass
from enum import Enum

class Rank(Enum):
	ACE    = 1,
	TWO    = 2,
	THREE  = 3,
	FOUR   = 4,
	FIVE   = 5,
	SIX    = 6,
	SEVEN  = 7,
	EIGHT  = 8,
	NINE   = 9,
	TEN    = 10,
	JACK   = 11,
	QUEEN  = 12,
	KING   = 13

class Suit(Enum):
	HEART   = 1,
	SPADE   = 2,
	CLUB    = 3,
	DIAMOND = 4

@dataclass
class Card:
	face: Rank
	suit: Suit

	def suit_f(self, s):
		if s == "SPADE":
			return "♠"
		if s == "DIAMOND":
			return "♦"
		if s == "HEART":
			return "♥"
		if s == "CLUB":
			return "♣"

	def face_f(self, f):
		if f == "ACE":
			return "A"
		if f == "KING":
			return "K"
		if f == "QUEEN":
			return "Q"
		if f == "JACK":
			return "J"
		if f == "TEN":
			return "10"
		if f == "NINE":
			return "9"
		if f == "EIGHT":
			return "8"
		if f == "SEVEN":
			return "7"
		if f == "SIX":
			return "6"
		if f == "FIVE":
			return "5"
		if f == "FOUR":
			return "4"
		if f == "THREE":
			return "3"
		if f == "TWO":
			return "2"

	def __repr__(self):
		return f"[{self.suit_f(self.suit.name)}{self.face_f(self.face.name)}]"

# initialize deck
DECK = []
for s in Suit:
	for r in Rank:
		DECK.append(Card(r, s))

def shuffled_deck():
	r = DECK
	random.shuffle(r)
	return r

print(shuffled_deck())
print(len(shuffled_deck()))