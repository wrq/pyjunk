import more_itertools


def understanding_partition_size():
    for x in range(1, 30):
        deck = list(range(x))
        print(x, 2**x, len(list(more_itertools.partitions(deck))))


# it is clear to see that partitions(n) grows with the power of 2.
# so, the number of partitions of a 52 card deck is 2 ** 51: 2251799813685248
# 2,251,799,813,685,248
