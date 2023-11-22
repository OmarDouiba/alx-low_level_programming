#!/usr/bin/python3

def island_perimeter(grid):
    """
    island_perimeter function that returns the perimeter
    of the island described in grid
    """
    per = 0
    j = 0

    for row in grid:
        for col in row:
            if col == 1:
                per += 4
                j += 1
                if j > 1:
                    per -= 2
    return per
