import sys
import typing
import string


def is_pangram(s: str) -> bool:
    lowered = s.lower()
    abecedario = string.ascii_lowercase
    for letra in abecedario:
        if letra not in lowered:
            return False
    return True


entrada = sys.argv[1]
print(is_pangram(entrada))
