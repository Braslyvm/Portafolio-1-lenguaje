#include <stdio.h>
#include <string.h>

struct Animal {
    char nombre[50];
    char especie[50];
};

int main() {
    struct Animal mascotas[100];  
    int cantidad = 3;   
    int opcion;
    char *Arreglo1[] = {"elder", "blanca", "dobby"};
    char *Arreglo2[] = {"humano", "dinosaurio", "gato"};

    for (int i = 0; i < cantidad; i++) {
        strcpy(mascotas[i].nombre, Arreglo1[i]);
        strcpy(mascotas[i].especie, Arreglo2[i]);
    }

    while (opcion != 3) {
        printf("\nOpciones\n");
        printf("1) Agregar Mascota\n");
        printf("2) Mostrar Todo\n");
        printf("3) Salir\n");
        scanf("%d", &opcion);
        getchar(); 

        if (opcion == 1) {
            printf("Nombre: ");
            fgets(mascotas[cantidad].nombre, 50, stdin);
            mascotas[cantidad].nombre[strcspn(mascotas[cantidad].nombre, "\n")] = '\0';
            printf("Especie: ");
            fgets(mascotas[cantidad].especie, 50, stdin);
            mascotas[cantidad].especie[strcspn(mascotas[cantidad].especie, "\n")] = '\0';
            cantidad++;
        } 
        else if (opcion == 2) {
            for (int i = 0; i < cantidad; i++) {
                printf(" %s - %s\n", mascotas[i].nombre, mascotas[i].especie);
            }
        }
    } 
    return 0;
}
