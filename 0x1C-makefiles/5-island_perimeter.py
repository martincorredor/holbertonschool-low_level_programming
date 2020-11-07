#!/usr/bin/python3

"""
Matriz
"""


def island_perimeter(grid):
    """Return the island perimeter"""
    perimeter = 0
    for column in range(len(grid)):
        for rpw in range(len(grid[column])):
            if grid[column][row] == 1:
                if column - 1 < 0 or grid[column - 1][row] == 0:
                    perimeter += 1
                if column + 1 >= len(grid) or grid[column + 1][row] == 0:
                    perimeter += 1
                if row + 1 >= len(grid[0]) or grid[column][row + 1] == 0:
                    perimeter += 1
                if row - 1 < 0 or grid[column][row - 1] == 0:
                    perimeter += 1
    return perimeter
