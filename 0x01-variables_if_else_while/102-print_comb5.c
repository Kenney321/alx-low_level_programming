#include <stdio.h>
/**
 * main - print all possible diffrent combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j;

        for (i = 0; i < 100; i++)
        {       
                for (i = 0; j <100; j++)
                {      
    		        if (i < j)
                        {
                                        putchar((i / 10) + 48);
                                        putchar((i % 10) + 48);
                                        putchar(',');
					putchar((j / 10) + 48);
					putchar((j % 10) + 48);
                                        if (i != 98 || j != 99)
                                        {
                                                putchar(',')
                                                putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
