#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &a);
    
    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &b);
    
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &c);
    
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        printf("Os valores formam um triangulo retangulo.\n");
    else
        printf("Os valores nao formam um triangulo retangulo.\n");
    
    return 0;
}
