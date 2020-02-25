import futbol


def test_futbol_draw():
    assert futbol.match_score(0, 0) == (1, 1)


def test_futbol_home_wins():
    assert futbol.match_score(2, 0) == (3, 0)


def test_futbol_visitor_wins():
    assert futbol.match_score(0, 2) == (0, 3)
