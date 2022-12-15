#include <stdio.h>
#include <string.h>
#include "ctype.h"

void main_menu();
char* roman(char* );
char Factoresprimos(int );
char BorrarEspacion(char );
char Egolatras(int );
int numeroMagico(int);
char Fecha(char);
int ProductoPunto(int , int);

void aux_roman(char*);

int main() {
    main_menu();
    return 0;
}

char* roman(char* romanChain){
    printf("procesar %s \n", &romanChain);
    getchar();
    return romanChain;
}


void main_menu(){
    int opcion;
    char *menu = "--------------Menu principal---------------\n"
                 "1. Romanos \n"
                 "2. Primos\n"
                 "3. Borrar Espacios\n"
                 "4. Egolatra\n"
                 "5. Numero Magico\n"
                 "6. Fechas\n"
                 "7. Producto Punto\n"
                 "8. Multiplicacion De Matrices\n"
                 "9. Matriz Magica\n"
                 "0. Salir\n";

    do{
        printf("%s", menu);
        printf("Ingrese una opcion: ");
        scanf("%i", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el numero Romano");
                char* romano;
                scanf("%s", &romano );
                roman(romano);
                break;
            case 2:
                printf("case 2\n");
                break;
            case 3:
                printf("case 3\n");
                break;
            case 4:
                printf("case 4\n");
                break;
            case 5:
                printf("case 5\n");
                break;
            case 6:
                printf("case 6\n");
                break;
            case 7:
                printf("case 7\n");
                break;
            case 8:
                printf("case 8\n");
                break;
            case 9:
                printf("case 9\n");
                break;
        }
    }while(opcion != 0);

}

