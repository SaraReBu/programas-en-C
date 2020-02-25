import typing


def get_T_o_D(h: int) -> str:
    if h < 6:
        return "night"
    elif h < 12:
        return "morning"
    elif h < 18:
        return "afternoon"
    else:
        return "evening"
