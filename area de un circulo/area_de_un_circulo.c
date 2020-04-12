#include <stdio.h>
#include <math.h>

#define numeroPI 3.1416

float calcularArea(float radio);

int main() {
    float radio, area;

    printf("Indique el radio del circulo: ");
    scanf("%f", &radio);

    if (radio < 0 ){
        area = 0;
    } else {
        area = calcularArea(radio);
    }

    printf("El area es igual a %f", area);
}

float calcularArea(float radio) {
    return (numeroPI * pow(radio, 2));
}