list = ['a', 'b', 'c', 'd']

def tty_find_last(list):
    length = len(list)

    if length == 0:
        print("This list is empty.")
    else:
        print(list[length - 1])

tty_find_last(list)
# => d
