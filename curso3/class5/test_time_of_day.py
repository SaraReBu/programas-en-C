import time_of_day


def test_night():
    assert time_of_day.get_T_o_D(0) == "night"
    assert time_of_day.get_T_o_D(1) == "night"
    assert time_of_day.get_T_o_D(2) == "night"
    assert time_of_day.get_T_o_D(3) == "night"
    assert time_of_day.get_T_o_D(4) == "night"
    assert time_of_day.get_T_o_D(5) == "night"


def test_morning():
    assert time_of_day.get_T_o_D(6) == "morning"
    assert time_of_day.get_T_o_D(7) == "morning"
    assert time_of_day.get_T_o_D(8) == "morning"
    assert time_of_day.get_T_o_D(9) == "morning"
    assert time_of_day.get_T_o_D(10) == "morning"
    assert time_of_day.get_T_o_D(11) == "morning"


def test_afternoon():
    assert time_of_day.get_T_o_D(12) == "afternoon"
    assert time_of_day.get_T_o_D(13) == "afternoon"
    assert time_of_day.get_T_o_D(14) == "afternoon"
    assert time_of_day.get_T_o_D(15) == "afternoon"
    assert time_of_day.get_T_o_D(16) == "afternoon"
    assert time_of_day.get_T_o_D(17) == "afternoon"


def test_evening():
    assert time_of_day.get_T_o_D(18) == "evening"
    assert time_of_day.get_T_o_D(19) == "evening"
    assert time_of_day.get_T_o_D(20) == "evening"
    assert time_of_day.get_T_o_D(21) == "evening"
    assert time_of_day.get_T_o_D(22) == "evening"
    assert time_of_day.get_T_o_D(23) == "evening"
