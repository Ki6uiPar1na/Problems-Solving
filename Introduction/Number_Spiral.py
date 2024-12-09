for i in range(int(input())):
    row, col = map(int, input().split())
    if row == 1 and row == col:
        print(1)
    elif col > row and col >= 3:
        if col & 1:  # Check if col is odd
            print(pow(col, 2) - (row - 1))
        else:
            print(pow(col - 1, 2) + row)
    else:
        if not (row & 1):  # Check if row is even
            print(pow(row, 2) - (col - 1))
        else:
            print(pow(row - 1, 2) + col)