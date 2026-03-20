#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int a=5;
    int x,y ;

    x= a++;
    y=++a;

    printf ("O valor de a é: 5\n");
    printf ("O valor com a++ (x): %i\n",x);
    printf ("O valor com ++a (y): %i\n\n", y);

    printf ("O valor de 'a' depois de x é: %i\n\n\n", a);

    return 0;
}