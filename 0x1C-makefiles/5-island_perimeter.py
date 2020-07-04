#!/usr/bin/python3
"""new method"""
def island_perimeter(grid):
    """method get perimeter"""
    perimetro = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1 and grid[x - 1][y] == 0:
                perimetro += 1
            if grid[x][y] == 1 and grid[x][y -1] == 0:
                perimetro += 1
            if grid[x][y] == 1 and grid[x][y + 1] == 0:
                perimetro += 1
            if grid[x][y] == 1 and grid[x + 1][y] == 0:
                perimetro += 1
    return perimetro
