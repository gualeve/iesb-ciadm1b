/******************************************************************************

Escreva UMA função para o cálculo do volume E da área de uma esfera

em que π = 3.141592. O valor do raio r deve ser passado por parâmetro, e os
valores calculados devem ser retornados por referência.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.141592

void esfera(float , float *, float *);

int main()
{
    float raio, volume, area;
    
    printf("Raio da esfera (em cm): ");
    scanf("%f", &raio);
    esfera(raio, &volume, &area);
    printf("Volume = %f cm3\n", volume);
    printf("Área = %f cm2\n", area);

    return 0;
}

void esfera(float raio, float *volume, float *area) {
    *volume = (4 * PI * pow(raio, 3.0)) / 3;
    *area = 4 * PI * pow(raio, 2.0);
    
    return;
}