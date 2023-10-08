#include <stdio.h>

/**
 * main - Entry point
 * 00 01 --> 98 99
 * Return: Always 0 (success)
 */
int main(void)
{
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    while (w < 10)
    {
		x = 0;
        while (x < 10)
        {
			y = 0;
            while (y < 9)
            {
				z = 0;
                while (z < 10)
                {
                    if (w != 0 || x != 0 || y != 0 || z != 0)
                    {
                        putchar(' ');
                    }
                    putchar(w + '0');
                    putchar(x + '0');
                    putchar(' ');
                    putchar(y + '0');
                    putchar(z + '0');

                    if (w != 9 || x != 8 || y != 9 || z != 9)
                    {
                        putchar(',');
                        putchar(' ');
                    }

                    z++;
                }
                
                y++;
            }

            x++;
        }
        
        w++;
    }

    putchar('\n');

    return (0);
}