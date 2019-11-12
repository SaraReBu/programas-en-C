x = "la pera"


def func():
    global x
    x = "una castaña"
    print("Python es "+x)


func()
print(x)
