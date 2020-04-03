#!/bin/python3

if __name__=="__main__":
    n = int(input())

    mat = []
    for _ in range(n):
        vec = list(map(int, input().split(' ')))
        mat.append(vec)

    trace = sum(mat[i][i] for i in range(n))
    opp_trace = sum(mat[n - 1 - i][i] for i in range(n))

    print(abs(trace - opp_trace))
