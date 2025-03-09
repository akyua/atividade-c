#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade <= 12) {
        printf("Preço do ingresso: R$ 10.00 (Criança)\n");
    } else if (idade >= 60) {
        printf("Preço do ingresso: R$ 15.00 (Idoso)\n");
    } else {
        printf("Preço do ingresso: R$ 20.00 (Adulto)\n");
    }

    return 0;
}
