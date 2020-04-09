#!/bin/python3

if __name__=="__main__":
    mat = []
    for _ in range(6):
        vec = list(map(int, input().split(' ')))
        mat.append(vec)

    max_sum = -9 * 9
    for i in range(0, 4):
        for j in range(0, 4):
            cur_sum = sum(mat[i][j:j+3]) + mat[i+1][j+1] + sum(mat[i+2][j:j+3])
            if (max_sum < cur_sum): max_sum = cur_sum

            print(cur_sum, max_sum)

    print(max_sum)
