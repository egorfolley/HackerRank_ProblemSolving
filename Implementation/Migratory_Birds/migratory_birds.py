#!/bin/python3

def migratory_birds(arr: list):
    most_frequent = 0
    
    for val in arr:
        cnt = arr.count(val)

        if cnt > most_frequent:
            most_frequent = val

    if most_frequent < 2:
        return min(arr)

    return most_frequent

if __name__=='__main__':
    n = int(input())
    
    val_frequent = [0] * 5 # because only 1 2 3 4 5
    for val in map(int, input().strip().split()):
	print(val)
        val_frequent[val] += 1

    print(val_frequent.index(max(val_frequent)))
