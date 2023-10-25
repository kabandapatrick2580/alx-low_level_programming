#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perim of the island described in grid.

    Args:
        grid (List[List[int]]): A list of lists representing the grid with 0 for water and 1 for land.

    Returns:
        int: The perim of the island.
    """
    rows = len(grid)
    columns = len(grid[0])

    perim = 0

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                perim += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perim -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perim -= 2

    return perim
