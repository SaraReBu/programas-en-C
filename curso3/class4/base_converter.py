import sys
number = int(sys.argv[1])
base = int(sys.argv[2])
quotient = number / base
l = list()
while number != 0:
    r = number % base
    number = number // base
    l.append(r)
l.reverse()
print(*l, sep="")
