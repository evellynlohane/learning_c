#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    printf(" tipo bool (_Bool):          %zu bytes\n", sizeof(_Bool));
    printf ("O tamanho de bytes ocupados por todos os C são:\n");
    printf (" Tipo char:             %zu bytes\n", sizeof(char));
    printf (" Tipo unsigned char:    %zu bytes\n", sizeof(unsigned char));
    printf (" Tipo signed char:      %zu bytes\n", sizeof(signed char));
    printf (" Tipo short int:        %zu bytes\n", sizeof(short int));
    printf (" Tipo unsigned short:   %zu bytes\n", sizeof(unsigned short));

    printf ("\n Tipo int:             %zu bytes\n", sizeof(int));
    printf (" Tipo unsigned int:     %zu bytes\n", sizeof(unsigned int));

    printf ("\n Tipo long int:        %zu bytes\n", sizeof(long int));
    printf (" Tipo unsigned long:    %zu bytes\n", sizeof(unsigned long));

    printf ("\n Tipo long long int:   %zu bytes\n", sizeof(long long int));
    printf (" Tipo unsigned long long: %zu bytes\n", sizeof(unsigned long long));

    printf ("\n Tipo float:           %zu bytes\n", sizeof(float));
    printf (" Tipo double:          %zu bytes\n", sizeof(double));
    printf (" Tipo long double:     %zu bytes\n", sizeof(long double));

    return 0;
}