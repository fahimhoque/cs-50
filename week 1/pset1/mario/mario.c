#include <stdio.h>
#include <stdlib.h>
int main()
{
    int height;
    do
    {
        height = get_int("Height: ");
    } while (!(height >= 1 && height <= 8));

    for (int row = 1; row <= height; row++)
    {
        for (int k = 1; k <= height - row; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }
        printf(" ");
        printf(" ");
        for (int j = 1; j <= 1; j++)
        {
            printf("#");
        }
    }
}