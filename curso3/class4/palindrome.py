import sys
import typing
import string


def clean(s: str) -> str:
    uncleaned = s.lower()

    mapa_whitespace = {}
    for c in string.whitespace:
        mapa_whitespace[ord(c)] = None
    uncleaned = uncleaned.translate(mapa_whitespace)

    mapa_punctuation = {}
    for d in string.punctuation + "¡¿":
        mapa_punctuation[ord(d)] = None
    uncleaned = uncleaned.translate(mapa_punctuation)

    mapa_accents = {ord('á'): ord('a'), ord('é'): ord('e'), ord('í'): ord(
        'i'), ord('ó'): ord('o'), ord('ú'): ord('u'), ord('ü'): ord('u')}
    uncleaned = uncleaned.translate(mapa_accents)
    return uncleaned


def is_palindrome(s: str) -> bool:
    cleaned = clean(s)
    if (cleaned == cleaned[::-1]):
        return True
    return False
