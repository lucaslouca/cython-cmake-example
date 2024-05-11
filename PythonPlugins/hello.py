from typing import List

def hello_world(text: str, names: List[str]) -> str:
    names_joined = ",".join(names)
    message = f"{text} {names_joined}!"
    print(f"From Python: {message}")
    return message