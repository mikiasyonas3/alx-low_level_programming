#include "main.h"
#include <stdio.h>

/**
 *print_array- raises the number base to power power
 *@a : the base
 *@n : the power
 *Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("%c", '\n');
}
