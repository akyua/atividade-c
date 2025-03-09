#include <stdio.h>

int main() {
    char genero;
    int idade;
    
    printf("Digite o genero (M - Masculino, F - Feminino): ");
    scanf(" %c", &genero);
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18)
        printf("A pessoa e maior de idade.\n");
    else
        printf("A pessoa e menor de idade.\n");
    
    if (genero == 'F' || genero == 'f') {
        if (idade >= 18)
            printf("Bem-vinda ao sistema!\n");
    }
    
    return 0;
}