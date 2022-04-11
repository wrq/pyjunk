import more_itertools as m

# for x in range(50):
#     print(x, len(list(m.partitions(range(x)))))


def compare(start: int, offset: int, iters: int):
    "a silly function for comparing growths"
    a = [x for x in range(start, start+iters)]
    b = [x for x in range(start+offset, start+offset+iters)]
    print(f"start: {start} offset: {offset} iters: {iters}")
    print(f"a: {sum(a)}")
    print(f"b: {sum(b)}")

compare(1, 100, 1000000000)
