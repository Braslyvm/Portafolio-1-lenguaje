#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Calcular(int *Arreglo, int *n) {
    int menor = *(Arreglo); 
    int mayor = *(Arreglo);
    int total = 0;
    int aprobados = 0;

    for (int i = 0; i < *n; i++) {
        total += *(Arreglo + i);

        if (*(Arreglo + i) < menor) {
            menor = *(Arreglo + i);
        }
        if (*(Arreglo + i) > mayor) {
            mayor = *(Arreglo + i);
        }
        if (*(Arreglo + i) >= 70) {
            aprobados++;
        }
    }

    float Promedio = (float) total / (*n);


    printf("Promedio  = %.2f\n", Promedio);
    printf("Menor     = %d\n", menor);
    printf("Mayor     = %d\n", mayor);
    printf("Aprobados     = %d\n", aprobados);
}



int main() {
    int *n = (int *)malloc(sizeof(int)); 
    bool sigue = false;

    while (!sigue){
        printf("Ingrese el numero de los estudiantes (1-100): ");
        scanf("%d", n);
        if (*n>0 && *n <=100){
            sigue=true;
        }
        else {
            printf("\n");
            printf("El valor debe de ser del 1 al 100");
            printf("\n");
        }
    }
    int *arreglo = (int *)malloc(*n * sizeof(int));

    for (int i = 0;i< *n; i++ ) {
        printf("Ingrese la calificacion: ");
        scanf("%d", (arreglo + i));  
    }
    Calcular(arreglo, n);

    free(arreglo); 
    free(n);      
    return 0;
}



