#include <stdio.h>

int main() {
    float distancia, velocidade, tempo;
    
    printf("Digite a distancia entre as cidades (km): ");
    scanf("%f", &distancia);
    
    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade);
    
    if (velocidade > 0) {
        tempo = distancia / velocidade;
        printf("O tempo de viagem sera de %.2f horas.\n", tempo);
    } else {
        printf("Velocidade invalida!\n");
    }
    
    return 0;
}