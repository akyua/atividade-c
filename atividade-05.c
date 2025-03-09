#include <stdio.h>

int main() {
    char turno;
    
    printf("Digite seu turno (M - Matutino, V - Vespertino, N - Noturno): ");
    scanf(" %c", &turno);
    
    if (turno == 'M' || turno == 'm')
        printf("Bom dia!\n");
    else if (turno == 'V' || turno == 'v')
        printf("Boa tarde!\n");
    else if (turno == 'N' || turno == 'n')
        printf("Boa noite!\n");
    else
        printf("Turno invalido!\n");
    
    return 0;
}