import random

import ctypes


# Load the shared library
opra = ctypes.CDLL('./100-operations.so')

# Call the arithmetic functions

a = 10
b = 5

print(f"Addition: {opra.add(a, b)}")
print(f"Subtraction: {opra.subtract(a, b)}")
print(f"Multiplication: {opra.multiply(a, b)}")
print(f"Division: {opra.divide(a, b)}")
print(f"Modulus: {opra.modulus(a, b)}")

