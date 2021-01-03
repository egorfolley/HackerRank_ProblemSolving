#!/bin/python3


if __name__=="__main__":
    n = int(input())

    stack = [0]
    for _ in range(n):
        query = input().split()
        type = int(query[0])

        if type == 1:
            x = int(query[1])
            stack.append(max(x, stack[-1]))

        if type == 2:
            stack.pop()

        if type == 3:
            print(stack[-1])
