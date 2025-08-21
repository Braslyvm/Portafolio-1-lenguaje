#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// Fuincion que recibe un numero entero y determina la cantidad de digitos pares e impares,
// si es palindromo y lo imprime en orden inverso.

void paresimpares (int a) {

    int cantidadP=0;
    int cantidadI=0;
    int temp = a;
    int invertido = 0;
    int x;

    while(a != 0) {
        x = a%10;
        if (x % 2 == 0) {
            cantidadP++;
        } else {
            cantidadI++;
        }
        
        invertido = invertido * 10 + x;
        a = a / 10;
    }
    printf("Cantidad pares: %d\n", cantidadP);
    printf("Cantidad impares: %d\n", cantidadI);
    if (temp == invertido) {
        printf("es palindromo\n");
    } else {
        printf("no es palindromo\n");
    }
}


void separar (float a){
    int entero = 0;
    int coma = 0;

    

    char str[50]; 

    sprintf(str, "%f", a);

    bool validar = false ;

    for (int i = 0; i < strlen(str) ; i++) {
        if (str[i] == '.') {
            validar = true;
            continue;
        }
        if (validar) {
            int temp = str[i] - '0';
            printf("Los numeros decimales: %d\n", temp);
            coma = coma * 10 + temp;
            
        } else {
            int temp = str[i] - '0';  
            entero = entero * 10 + temp;
        }
    }

    printf("Los numeros enteros: %d\n", entero);
    printf("Los numeros decimales: %d\n", coma);
}





int main() {
    float a;
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    separar(a);
    
    return 0;
}



