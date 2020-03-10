n_max = int(input("Dime el número máximo "))
i = 0
while (i := i + 1) <= n_max:
    if i % 2 == 0:
        continue
    print(i)
