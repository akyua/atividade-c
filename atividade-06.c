#include <stdio.h>

int main() {
    int nota;
    
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);
    
    if (nota >= 90 && nota <= 100)
        printf("Conceito: A\n");
    else if (nota >= 80 && nota < 90)
        printf("Conceito: B\n");
    else if (nota >= 70 && nota < 80)
        printf("Conceito: C\n");
    else if (nota >= 60 && nota < 70)
        printf("Conceito: D\n");
    else if (nota < 60 && nota >= 0)
        printf("Conceito: F\n");
    else
        printf("Nota invalida!\n");
    
    return 0;
}
