import sys


def first_half(cadena):
    return cadena[:len(cadena)//2]


def second_half(cadena):
    return cadena[len(cadena)//2:]


cadena = sys.argv[1]
print(first_half(cadena)+second_half(cadena))
