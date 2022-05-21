#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h; // declare variable height
    do
    {
        h = get_int("height:");

    }
    while (h < 1 || h > 8); // make sure height is not less than 1 or greater than 8

    for (int row = 0; row < h; row++) // to print new line as row
    {
        for (int space = h - row - 1; space > 0; space--) // to print space

        {
            printf(" ");
        }

        for (int hash = 0; hash <= row; hash++) // to print hash
        {
            printf("#");
        }
        printf("\n");
    }
}