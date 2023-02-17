#include <stdio.h>
/**
 * main - A program to print the size of various computer types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
pritnf("Size of a char: %lu byte(s)\n, (unsigned long) sizeof(a));
pritnf("Size of a int:%lu byte(s)\n, (unsigned long) sizeof(b));
pritnf("Size of a long int: %lu byte(s)\n, (unsigned long) sizeof(c));
pritnf("Size of a long long int: %lu byte(s)\n, (unsigned long) sizeof(d));
pritnf("Size of a float: %lu byte(s)\n, (unsigned long) sizeof(f));
return (0);
}
