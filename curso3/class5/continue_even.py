n_max = int(input("Dime el número máximo "))
i = -1
while (i := i + 1) <= n_max:
    if i % 2 == 1:
        continue
    print(i)
