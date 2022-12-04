#!/bin/python3


def balanced_sum(arr: list):
    '''
        Calculation function of sums

        Parameters
        ----------
        arr : list
            input array of numbers to process
        
        Returns
        -------
        string
            YES or NO depends on calculations
    '''    
    ### Long solution:
    #__________________
    # first, last = 0, len(arr) - 1
    # middle = n//2
    
    # left_unbalanced, right_unbalanced = False, False
    
    # is_balanced = False
    # while not is_balanced:
    #     left_sum = sum(arr[:middle])
    #     right_sum = sum(arr[middle + 1:])

    #     if left_sum > right_sum:
    #         middle -= 1
    #         left_unbalanced = True
        
    #     if left_sum < right_sum:
    #         middle += 1
    #         right_unbalanced = True

    #     if left_sum == right_sum: is_balanced = True
    #     if left_unbalanced and right_unbalanced: break
    #__________________
    ### Quick solution:

    total_sum = sum(arr)

    current_sum = 0
    for i in range(len(arr)):

        total_sum -= arr[i]

        if current_sum == total_sum:
            return "YES"

        current_sum += arr[i]  

    return "NO"


if __name__=='__main__':
    '''
        Main input-output function
    '''

    T = int(input())
    
    while T:
        n = int(input())
        arr = list(map(int, input().split()))

        is_balanced = balanced_sum(arr)
        print(is_balanced)
        
        T -= 1