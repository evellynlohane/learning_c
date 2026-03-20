#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int op;

    printf("--- MENU DE EXERCÍCIOS ---\n");
    printf("1 - Questão 01\n");
    printf("2 - Questão 02\n");
    printf("3 - Questão 03\n");
    printf("--------------------------\n");
    printf("Escolha uma opção (1 a 3): ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("\nQuestão 01.\n");
            // Aqui você pode colar a lógica da sua questão 1
            break;

        case 2:
            printf("\nQuestão 02.\n");
            // Aqui você pode colar a lógica da sua questão 2
            break;

        case 3:
            printf("\nQuestão 03.\n");
            // Aqui você pode colar a lógica da sua questão 3
            break;

        default:
            printf("\nOpção inválida! Escolha um número entre 1 e 3.\n");
            break;
    }

    printf("\nPrograma finalizado.\n");
    return 0;
}