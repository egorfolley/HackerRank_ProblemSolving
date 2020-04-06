#!/bin/python3

if __name__=="__main__":
    arr = list(map(int, input().split(' ')))
    sum = sum(arr)

    print(sum - max(arr), sum - min(arr))
