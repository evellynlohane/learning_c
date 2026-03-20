#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int op = 1;

    while (op != 0) {
        printf("\n--- MENU DE QUESTÕES (Digite 0 para sair) ---\n");
        printf("Escolha uma opção (1 a 3): ");
        scanf("%d", &op);

        if (op == 0) {
            printf("Saindo do programa...\n");
            break;
        }

        switch (op) {
            case 1:
                printf("\nExecutando Questão 01...\n");
                break;
            case 2:
                printf("\nExecutando Questão 02...\n");
                break;
            case 3:
                printf("\nExecutando Questão 03...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    }
    return 0;
}