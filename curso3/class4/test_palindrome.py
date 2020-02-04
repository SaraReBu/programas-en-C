import palindrome


def test_is_not_palindrome():
    assert palindrome.is_palindrome("perro") == False


def test_is_palindrome():
    assert palindrome.is_palindrome("ana") == True


def test_is_palindrome_containing_caps():
    assert palindrome.is_palindrome("Ana") == True


def test_is_palindrome_with_spaces():
    assert palindrome.is_palindrome("amad a la dama") == True


def test_is_palindrome_with_puntuacion():
    assert palindrome.is_palindrome("¡Ojo!Corre poco perro cojo") == True


def test_is_palindrome_with_spanish_accents():
    assert palindrome.is_palindrome("Lo sé,dama de sol") == True
