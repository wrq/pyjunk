def register(fn, target):
    target.fns.append(fn)

class Fn():
    def __init__(self):
        self.fns = []

    def __repr__(self):
        return f"{self.fns}"

myfns = Fn()
print(myfns)

@register()
def aux():
    print("hello from aux")

print(myfns)