#!/usr/bin/python3
"""
    Module to solve island perimeter problem
"""


def island_perimeter(grid):
    """
        Compute perimeter of the grids containing "1"
    """
    len_row = len(grid)
    len_col = len(grid[0])
    perim = 0

    for row in range(len_row):
        for col in range(len_col):
            if grid[row][col] == 1:
                """
                    check for land
                """
                if row == 0 or grid[row - 1][col] == 0:
                    """check top"""
                    perim += 1
                if (row + 1) == len_row or grid[row + 1][col] == 0:
                    """check bottom"""
                    perim += 1
                if col == 0 or grid[row][col - 1] == 0:
                    """check left"""
                    perim += 1
                if (col + 1) == len_col or grid[row][col + 1] == 0:
                    """check right"""
                    perim += 1
    return perim
