#include <stdio.h>
/**
 * main - entry point 
 *
 * Return: 0
 */
int main(void)
{
int i;

int j;

for (i = 48; i <= 57; i++)
{
for (j = i; j <= 57; j++)
{
putchar(i);
putchar(j);
	
if (i == j)
{
continue;
}
putchar(',');
putchar (' ');

}

}

putchar('\n');

return (0);

}


