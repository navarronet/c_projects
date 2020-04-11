#include <stdio.h>


int main(){
    float radio, area;

    printf("Radio = ? ");
    scanf("%f", &radio);

    area = 3.14159 * radio * radio;

    printf("Area = %f", area);
}
