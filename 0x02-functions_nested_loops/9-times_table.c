#include "main.h"
/**
 * times_table - print 9 * every numb
 * Return: void
 */
void times_table(void)
{
    int row, col;

    for (row = 0; row < 10; row++)
	{
        _putchar('0');
        for (col = 1; col < 10; col++)
		{
            int product = row * col;
            _putchar(',');
            _putchar(' ');

            if (product < 10)
			{
                _putchar(' ');
                _putchar(product + '0');
            }
			else if (product < 100)
			{
                _putchar(product / 10 + '0');
                _putchar(product % 10 + '0');
            } 
			else
			{
                _putchar(product / 100 + '0');
                _putchar((product % 100) / 10 + '0');
                _putchar(product % 10 + '0');
            }
        }
        _putchar('\n');
    }
}
