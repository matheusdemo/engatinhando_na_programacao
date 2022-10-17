#include <stdio.h>

int main()
{
    //Declaração de variaveis
    float distancia, tempo, velocidade, ms;
    //Entrada de dados distância e velocidade
    printf("Digite distancia percorrida:");
    //Armazenana o valor na varial
    scanf("%f", &distancia);
    //Exibir o valor digitado
    printf("Digite o tempo gasto:");
    scanf("%f", &tempo);
    //Cálculo da velocidade média
    velocidade = distancia / tempo;
    ms=velocidade/3.6;
    //exiberesiltado da velocidae em kilo hora e metros seg
    printf("A velocidade média é de %.2f km/h", velocidade);
    printf("A velocidade média é de %.2f m/s", ms);
    return 0;
}