import sys

entrada = sys.argv[1]
acronimo = []
cadenas = entrada.split()
for cadena in cadenas:
    acronimo.append(cadena[0].capitalize())

print(*acronimo, sep=".")
