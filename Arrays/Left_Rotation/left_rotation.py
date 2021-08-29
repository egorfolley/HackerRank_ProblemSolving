#!/bin/python3

def left_rotation(arr: list, d: int):
    if d > n:
        d = int(d % n)
    
    arr.extend(arr[:d])
    
    del arr[:d]
    

if __name__=='__main__':
    n, d = list(map(int, input().split()))
    
    arr = list(map(int, input().split()))
    left_rotation(arr, d)
    
    print(*arr)
