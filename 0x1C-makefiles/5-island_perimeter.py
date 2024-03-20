#!/usr/bin/python3
"""
this module for Island Perimeter function
"""


def island_perimeter(grid):
    """func : Island Perimeter"""
    colum = len(grid[0])
    row = len(grid)
    edg = 0
    s = 0

    for i in range(row):
        for j in range(colum):
            if grid[i][j] == 1:
                s += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edg += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edg += 1
    return s * 4 - edg * 2
