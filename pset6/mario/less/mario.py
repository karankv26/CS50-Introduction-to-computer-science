from cs50 import get_int


while True:
    n = get_int("height: ")
    if n >= 1 or n <= 8:
        break

for i in range(n):
    print((n-1-i)*" ",end ="")
    print((i+1) * "#")


