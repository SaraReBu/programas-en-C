import typing


def match_score(home_score: int, visitor_score: int) -> tuple:
    if home_score == visitor_score:
        return (1, 1)
    elif home_score > visitor_score:
        return (3, 0)
    else:
        return (0, 3)
