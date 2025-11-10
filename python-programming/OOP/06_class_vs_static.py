class MyClass:
    count = 0
    def __init__(self): MyClass.count += 1
    @classmethod
    def get_count(cls): return cls.count
    @staticmethod
    def info(): return "utility"

a = MyClass(); b = MyClass()
print(MyClass.get_count(), MyClass.info())
