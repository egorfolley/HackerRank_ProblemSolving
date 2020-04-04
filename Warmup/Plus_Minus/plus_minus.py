#!/bin/python3

if __name__=="__main__":
    n = int(input())
    arr = list(map(int, input().split()))

    pos = len(list(filter(lambda x : (x > 0), arr)))
    neg = len(list(filter(lambda x : (x < 0), arr)))
    zero = len(arr) - (pos + neg)

    print("%.6f" % (pos/n))
    print("%.6f" % (neg/n))
    print("%.6f" % (zero/n))
