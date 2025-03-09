#include <stdio.h>
#include <string.h>

int main() {
    float valorConta, valorFinal;
    char formaPagamento[10];

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &valorConta);

    printf("Digite a forma de pagamento (dinheiro ou cartao): ");
    scanf("%s", formaPagamento);

    if (strcmp(formaPagamento, "dinheiro") == 0) {
        valorFinal = valorConta * 0.9;
    } else if (strcmp(formaPagamento, "cartao") == 0) {
        valorFinal = valorConta;
    } else {
        printf("Forma de pagamento invalida.\n");
        return 1;
    }

    printf("Valor final a ser pago: R$ %.2f\n", valorFinal);

    return 0;
}
