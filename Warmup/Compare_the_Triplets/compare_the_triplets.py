#!/bin/python3

if __name__=="__main__":
    a = list(map(int, input().split(' ')))
    b = list(map(int, input().split(' ')))

    compare = lambda a, b : sum([i > j for i, j in zip(a, b)])

    print(compare(a,b), compare(b, a))
