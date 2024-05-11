from typing import List

def hello_world(names: List[str]) -> str:
    names_joined = ",".join(names)
    message = f"Hello World {names_joined}!"
    print(message)
    return message