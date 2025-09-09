
#include <stdio.h>
 

// Función para intercambiar dos números usando punteros
void  swich (int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


// Función para ordenar un arreglo de enteros usando punteros usando el algoritmo de burbuja
void ordenar (int *Arreglo, int largo) {
    for (int x = 0; x < largo - 1; x++) {
        for (int i = 0; i < largo - 1; i++) {
            if (*(Arreglo + i) > *(Arreglo + i + 1)) {
                int temp = *(Arreglo + i);
                *(Arreglo + i) = *(Arreglo + i + 1);
                *(Arreglo + i + 1) = temp;
            }
        }
    }
}




int main()
{
	//int n = 6;
	//int m = 8;
	//printf(" x = %d, y = %d\n", n, m);
	//swich(&n, &m);
	//printf(" x = %d, y = %d\n", n, m);


	int Arreglo[] = {2,4,6,78,9};
	int n = sizeof(Arreglo) / sizeof(Arreglo[0]);

	int *ptr = Arreglo; 
 
    printf("Contenido del arreglo con punteros:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");
    ordenar(Arreglo, n); 
    printf("Contenido del arreglo con punteros:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

	return 0;
}