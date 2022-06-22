class MachineInteger:
    def __init__(self, initial: int = 0, limit: int = 255):
        if initial > limit:
            raise Exception("MachineInteger is over size")
        self.value = initial

    def __add__(self, other):
        if other is MachineInteger:
            self.__add__(other.value)
        else:
            self.value += other

    def __repr__(self):
        return f"value: {self.value}"


m = MachineInteger()
m += 5
print(m)