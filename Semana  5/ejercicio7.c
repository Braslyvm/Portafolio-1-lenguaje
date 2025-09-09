
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int masFrecuente(int *arr, int *n) {
    int frecuencia[31] = {0};

    for (int i = 0; i < *n; i++) {
        frecuencia[arr[i]]++;
    }

    int maxFreq = 0;
    int numMasFrecuente = 0;

    for (int i = 1; i <= 30; i++) {
        if (frecuencia[i] > maxFreq || (frecuencia[i] == maxFreq && i < numMasFrecuente)) {
            maxFreq = frecuencia[i];
            numMasFrecuente = i;
        }
    }

    return numMasFrecuente;
}

int main() {
    int n;

    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número tiene que ser positivo\n");
        return 1;
    }

    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Error al reservar memoria\n");
        return 1;
    }

    srand(time(NULL));

    printf("\nArray generado: ");
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 30) + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    int resultado = masFrecuente(arr, &n);

    printf("\nEl número que más se repite es: %d\n", resultado);

    free(arr);
    return 0;
}
