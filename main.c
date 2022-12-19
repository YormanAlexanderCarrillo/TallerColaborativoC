#include <stdio.h>
#include <string.h>
#include "ctype.h"

void main_menu();

char *roman(char *);

char factoresprimos(int);

void deleteSpaces(char chain[100]);

char egolatras(int);

int numeroMagico(int);

void *Fecha(char *);

int ProductoPunto(int, int);

void magicsquares(int);


int main() {
    main_menu();
    return 0;
}

char *roman(char *romanChain) {
    printf("procesar %s \n", &romanChain);
    getchar();
    return romanChain;
}

void deleteSpaces(char chain[100]) {
    char chainNoSpaces[100];
    int i = 0;
    int j = 0;
    while (chain[i] != '\0') {
        if (chain[i] != ' ') {
            chainNoSpaces[j] = chain[i];
            j++;
        }
        i++;
    }
    printf("la cadena sin espacios es: %s \n", chainNoSpaces);
}

void *Fecha(char *date) {


}

#define nums 100
int a[nums][nums];




void main_menu() {
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

    do {
        printf("%s", menu);
        printf("Ingrese una opcion: ");
        scanf("%i", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el numero Romano");
                char *romano;
                scanf("%s", &romano);
                roman(romano);
                break;
            case 2:
                printf("case 3\n");
                break;
            case 3:
                fflush(stdin);
                printf("ingrese la cadena de texto\n");
                char chains[100];
                fflush(stdin);
                fgets(chains, 100, stdin);
                deleteSpaces(chains);
                break;
            case 4:
                printf("case 4\n");
                break;
            case 5:
                printf("case 5\n");
                break;
            case 6:
                printf("Ingrese la fecha");
                char * date;
                scanf("%s", &date);
                Fecha(date);
                break;
            case 7:
                printf("case 7\n");
                break;
            case 8:
                printf("case 8\n");
                break;
            case 9:
                printf("Ingrese un numero: \n");

                break;
        }
    } while (opcion != 0);

}

