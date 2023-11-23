#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """
    island_perimeter function that returns the perimeter
    of the island described in grid
    """
    per = 0
    grid_len = len(grid)
    row_len = len(grid[0])

    for i in range(grid_len - 1):
        for j in range(row_len - 1):
            if grid[i][j] == 0:
                pass
            else:
                left = grid[i][j - 1]
                right = grid[i][j + 1]
                top = grid[i - 1][j]
                bottom = grid[i + 1][j]
