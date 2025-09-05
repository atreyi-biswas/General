# Lambda function (anonymous function)
square = lambda x: x * x
print("Square of 4:", square(4))

# Lambda with map()
nums = [1, 2, 3, 4, 5]
squares = list(map(lambda x: x*x, nums))
print("Squares:", squares)

# Lambda with filter()
evens = list(filter(lambda x: x % 2 == 0, nums))
print("Evens:", evens)

# Lambda with reduce()
from functools import reduce
product = reduce(lambda x, y: x*y, nums)
print("Product:", product)

