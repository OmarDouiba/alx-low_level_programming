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
    row_len = len(grid) - 1
    col_len = len(grid[0]) - 1

    for i in range(row_len):
        for j in range(col_len):
            if grid[i][j] == 0:
                pass
            else:
                left = grid[i][j - 1]
                right = grid[i][j + 1]
                top = grid[i - 1][j]
                bottom = grid[i + 1][j]
                # Top
                if i == 0 or top == 0:
                    per += 1
                # Bottom
                if i == row_len or bottom == 0:
                    per += 1
                # Left
                if j == 0 or left == 0:
                    per += 1
                # Right
                if j == col_len or right == 0:
                    per += 1
    return per
