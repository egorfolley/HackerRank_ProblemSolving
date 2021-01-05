#!/bin/python3

def equal_stacks(h1, h2, h3):
    c1, c2, c3 = map(sum, (h1, h2, h3))
    while h1 and h2 and h3:
        m = min(c1, c2, c3)

        while c1 > m:
            c1 -= h1.pop()
        while c2 > m:
            c2 -= h2.pop()
        while c3 > m:
            c3 -= h3.pop()

        if c1 == c2 == c3:
            return c1

    return 0

if __name__=="__main__":
    n1, n2, n3 = input().split()

    h1 = [int(c) for c in input().split()][::-1]
    h2 = [int(c) for c in input().split()][::-1]
    h3 = [int(c) for c in input().split()][::-1]

    print(equal_stacks(h1,h2,h3))
