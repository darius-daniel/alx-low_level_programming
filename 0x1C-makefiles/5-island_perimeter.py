#!/usr/bin/python3
"""A function that returns the perimeter of the island described in grid

Prototype: def island_perimeter(grid):

            grid = list of lists
"""


def island_perimeter(grid):
    """Computes the perimeter of the island described in grid.

    Args:
        grid: list of list of integers
    """
    perimeter = 0
    n_rows = len(grid)

    if grid:
        n_cols = len(grid[0])

    for row in range(n_rows):
        for col in range(n_cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == n_rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == n_cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1 
                # if row == 0 or row == n_rows - 1:
                #     perimeter += 1
                # if col == 0 or col == n_cols - 1:
                #     perimeter += 1
                # if grid[row - 1][col] == 0 or grid[row + 1][col] == 0:
                #     perimeter += 1
                # if grid[row][col - 1] == 0 or grid[row][col + 1] == 0:
                #     perimeter += 1

    return perimeter
