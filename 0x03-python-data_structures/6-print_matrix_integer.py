#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for arr in matrix:
        for elem in arr:
            print("{}".format(elem), end=" ")
        print()
