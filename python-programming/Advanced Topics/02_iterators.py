class MyIterator:
    def __init__(self, limit):
        self.limit = limit
        self.num = 0

    def __iter__(self):
        return self

    def __next__(self):
        if self.num < self.limit:
            self.num += 1
            return self.num
        else:
            raise StopIteration

it = MyIterator(5)
for val in it:
    print(val)
