#include <stdio.h>



void quienesprimo (int *arreglo, int *n){
    for (int i = 0; i < *n; i++){
        int inicio = 1;
        int pasa = 1;

        if ((*(arreglo + i))< 2) {
            printf(" es primro  = %d\n",*(arreglo + i));
        }
        else {
            while (inicio < *(arreglo + i)-1){
                inicio++;
                if ((*(arreglo + i)) % inicio == 0){
                    
                    pasa = 0;
                    break;
                }
            }
            if (pasa == 0){
                printf("no es primo  = %d\n",*(arreglo + i));
            }
            else {
                printf("Es primo  = %d\n",*(arreglo + i));
                
            }
        }

    }

}


// funcion que recorra un arrglo por puntero sin el largo 
void recorrerArreglo (int *arreglo){
    while (*arreglo != 0){
        printf("%d ",*arreglo);
        arreglo++;
    }
    printf("\n");
}






int main (){
    int Arreglo[] = {7,14,23,57,16,6,7,18,19,10};
	int n = sizeof(Arreglo) / sizeof(Arreglo[0]);

    recorrerArreglo(Arreglo);


    //quienesprimo(Arreglo, &n); 












    return 0;
}