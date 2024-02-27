from enum import Enum


@enum.unique
class Status(Enum):
    SUCCESS = 1
    OK = 2
    FAIL = 3
    WRONG = 4

def main():
    for s in Status:
        print(s.name)

    print(Status.__members__)

    print(Status.SUCCESS == Status.OK)

if __name__ == "__main__":
    main()
