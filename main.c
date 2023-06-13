#include <stdio.h>
#include <math.h>
#include "funciones.h"
int main (int argc, char *argv[])
{
float matrizA[4][2]={{3,-7},{1.4,9},{7.8,-3.2},{8,0}};
float transpuesta[2][4]={{3,1.4,7.8,8},{-7,9,-3.2,0}};
float mult[4][4];
multiplicarMatrices(matrizA,transpuesta);

float determinante = calcdet(mult);

    printf("La determinante de la matriz es: %d\n", determinante);

return 0;
}