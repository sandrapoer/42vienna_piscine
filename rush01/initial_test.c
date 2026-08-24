#include <unistd.h>

// Grid size = nxn
// input size = n² (array len including spaces = nx2-1)


void print_grid(int grid[4][4])
{
    char c;
    int  row;
    int  col;

    row = 0;
    while (row < 4)
    {
        col = 0;
        while (col < 4)
        {
            c = (char)('0' + grid[row][col]);
            write(1, &c, 1);
            if (col < 4 - 1)
                write(1, " ", 1);
            col++;
        }
        write(1, "\n", 1);
        row++;
    }
}

int main(void)
{
    int grid[4][4] = {0};

    print_grid(grid);
    return (0);
}

// Check Input
int     main(int argc, char **argv)
{
        int     grid[4][4] = {0};
        int     numbers[16];

        if (argc !== 2)
        {
                write(1, "Error\n", 6);
                return (1);
        }
        print_grid(grid)
}
