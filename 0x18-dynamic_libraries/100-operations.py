import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)

print(f"Addition: {cops.add(a, b)}")
print(f"Subtraction: {cops.subtract(a, b)}")
print(f"Multiplication: {cops.multiply(a, b)}")
print(f"Division: {cops.divide(a, b)}")
print(f"Modulus: {cops.modulus(a, b)}")
