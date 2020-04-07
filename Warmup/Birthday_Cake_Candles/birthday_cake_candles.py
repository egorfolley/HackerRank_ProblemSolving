#!/bin/python3

if __name__=="__main__":
    n = int(input())
    candles = list(map(int, input().split()))

    print(candles.count(max(candles)))
