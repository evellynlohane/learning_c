#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int op = 1;
    double num1, num2, resultado;

    while (op != 0) {
        printf("\n--- CALCULADORA --- \n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Exponenciação\n");
        printf("0 - Sair\n");
        printf("-------------------\n");
        printf("Escolha uma opção: ");
        scanf("%i", &op);

        if (op == 0) {
            printf("\nSaindo...\n");
            break;
        }

        if (op >= 1 && op <= 5) {
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número (ou expoente): ");
            scanf("%lf", &num2);
        }

        switch (op) {
            case 1:
                resultado = num1 + num2;
                printf("\nResultado da Soma: %.2lf\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\nResultado da Subtração: %.2lf\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\nResultado da Multiplicação: %.2lf\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("\nResultado da Divisão: %.2lf\n", resultado);
                } else {
                    printf("\nErro: Divisão por zero!\n");
                }
                break;
            case 5:
                if (num2 < 0) {
                    printf("\nErro: Expoente negativo não suportado aqui.\n");
                } else {
                    resultado = 1;
                    double b = num2;
                    while (b > 0) {
                        resultado *= num1;
                        b--;
                    }
                    printf("\nResultado da Exponenciação: %.2lf\n", resultado);
                }
                break;
            default:
                printf("\nOpção Inválida!\n");
        }
    }

    return 0;
}