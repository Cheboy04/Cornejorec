#include <stdio.h>
#include <math.h>
#include "funciones.h"
void multiplicarMatrices(float matriz1[4][2], float transpuesta[2][4])
{
    float mult[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    float mult2[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    int i = 0, j = 0, z = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (z = 0; z < 2; z++)
            {
                mult[i][j] = mult[i][j] + (matriz1[i][z] * transpuesta[z][j]);
            }
        }
    }
 
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (z = 0; z < 2; z++)
            {
                mult2[i][j] = mult2[i][j] + (mult[i][z] * mult[z][j]);
            }
        }
    }

   for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%.2f ", mult[i][j]);
        }
        printf("\n");
    }
}
float calcdet(float mult[4][4]) {

    float det;
    
    det = (mult[0][0] * mult[1][1] * mult[2][2]*mult[3][3]) +
          (mult[0][1] * mult[1][2] * mult[2][0]*mult[3][0]) +
          (mult[0][2] * mult[1][3] * mult[2][0]*mult[3][1]) -
          (mult[0][3] * mult[1][2] * mult[2][2]*mult[3][0]) -
          (mult[0][0] * mult[1][3] * mult[2][2]*mult[3][1]) -
          (mult[0][1] * mult[1][0] * mult[2][3]*mult[3][3]);
    
    return det;
}