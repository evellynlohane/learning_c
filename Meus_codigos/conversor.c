#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int decimal;
    printf ("Digite um numero decimal:");
    scanf ("%i",&decimal);
    printf ("O numero decimal é: %i\n", decimal);
    printf ("O numero correspondente em octal é: %o\n", decimal);
    printf ("O numero correspondente em hexadecimal é: %x\n", decimal);

    return 0;
}