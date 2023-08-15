#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = s;
    printf("%s", s);
    printf("%s", p);
    return (0);
}
