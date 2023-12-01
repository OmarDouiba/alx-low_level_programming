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

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Top
                if i == 0 or grid[i - 1][j] == 0:
                    per += 1
                # Bottom
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    per += 1
                # Left
                if j == 0 or grid[i][j - 1] == 0:
                    per += 1
                # Right
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    per += 1
    return per
