#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    int numero;
    char *resultado;
    setlocale (LC_ALL, "Portuguese");
    printf("Digite um valor inteiro: ");
    scanf ("%i", &numero);
    resultado = (numero %2==0) ? "Par" : "Impar";
    printf ("\n O resultado é: %i (%s)\n\n\n", numero, resultado);
    return 0;
}