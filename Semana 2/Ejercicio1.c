#include <stdio.h>

void Ordenar(int a, int b, int c, char ordenar) {
    int lista[3] = {a, b, c};

    if (ordenar == 'A' || ordenar == 'a') {
        if (lista[0] > lista[1]){
            int x = lista[0];
            lista[0] = lista[1];
            lista[1] = x;
        }
        if (lista[0] > lista[2]) {
            int x = lista[0];
            lista[0] = lista[2];
            lista[2] = x;
        }
        if (lista[1] > lista[2]) {
            int x = lista[1];
            lista[1] = lista[2];
            lista[2] = x;
        }
        printf("Ordenados de menor a mayor: %d %d %d\n", lista[0], lista[1], lista[2]);

    } else if (ordenar == 'D' || ordenar == 'd') {
        if (lista[0] < lista[1]){
            int x = lista[0];
            lista[0] = lista[1];
            lista[1] = x;
        }
        if (lista[0] < lista[2]) {
            int x = lista[0];
            lista[0] = lista[2];
            lista[2] = x;
        }  
        if (lista[1] < lista[2]) {
            int x = lista[1];
            lista[1] = lista[2];
            lista[2] = x;
        }
        printf("Ordenados de mayor a menor: %d %d %d\n", lista[0], lista[1], lista[2]);
    }
}
int main() {
    int a, b, c;
    char ordenar;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);
    printf("Ingrese 'A' para de menor a mayor\n");
    printf("Ingrese 'D' para de mayor a menor\n");
    printf("Opción: ");
    scanf(" %c", &ordenar);
    Ordenar(a,b,c, ordenar);
    return 0;
}