#include <stdio.h>
#include <string.h>
#include "ctype.h"

void main_menu();

char *roman(char *);
char* Factoresprimos(int);
void deleteSpaces(char chain[100]);
char egolatras(int);
int numeroMagico(int);
void date(int day, int mount, int year);
int ProductoPunto(int, int);
void magicSquares(int);


int main() {
    main_menu();
    Factoresprimos(100);
    return 0;
}

char *roman(char *romanChain) {
    printf("procesar %s \n", &romanChain);
    getchar();
    return romanChain;
}


char *Factoresprimos(int number) {
    int i_factores = 0;
    int factores[1000];
    int i = 2;
    while (i <= number) {
        if ((number % i) == 0) {
            factores[i_factores] = i;
            number = number / i;
            i_factores++;
            continue;
        }
        i++;
    }

/* Rutina para imprimir */
    i = 0;
    while (i < i_factores) {
        printf(" %d ", factores[i]);
        i++;

    }
    return factores;
}


// metodo para elinimar los espacios entre las palabras ingresadas por teclado
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

//metodo para dar formato a la fecha
void date(int day, int mount, int year) {
    char messaje[27] = "Dia no valido para este mes";
    if (day >= 1 && day <= 31 && mount <= 12 && year >= 1000 && year <= 5000) {
        switch (mount) {
            case 1:
                printf("%d de Enero de %d \n", day, year);
                break;
            case 2:
                if (year % 4 == 0 && year % 100 != 0 && day == 29) {
                    printf("Anio bisiesto\n");
                    printf("%d de Febrero de %d \n", day, year);
                    break;
                } else if (day <= 28) {
                    printf("%d de Febrero de %d \n", day, year);
                } else if (day >= 29) {
                    printf("%s o anio\n", messaje);
                }
                break;
            case 3:
                printf("%d de Marzo de %d \n", day, year);
                break;
            case 4:
                if (day <= 30) {
                    printf("%d de Abril de %d \n", day, year);
                } else {
                    printf("%s\n", messaje);
                }
                break;
            case 5:
                printf("%d de Mayo de %d \n", day, year);
                break;
            case 6:
                if (day <= 30) {
                    printf("%d de Junio de %d \n", day, year);
                } else {
                    printf("%s\n", messaje);
                }
                break;
            case 7:
                printf("%d de Julio de %d \n", day, year);
                break;
            case 8:
                printf("%d de Agosto de %d \n", day, year);
                break;
            case 9:
                if (day <= 30) {
                    printf("%d de Septiembre de %d \n", day, year);
                } else {
                    printf("%s\n", messaje);
                }
                break;
            case 10:
                printf("%d de Octubre de %d \n", day, year);
                break;
            case 11:
                if (day <= 30) {
                    printf("%d de Noviembre de %d \n", day, year);
                } else {
                    printf("%s\n", messaje);
                }

                break;
            case 12:
                printf("%d de Diciembre de %d \n", day, year);
                break;

        }
    } else {
        printf("Fecha invalida\n");
    }

}




// metodo para mostrar el menu
void main_menu() {
    int option;
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
        scanf("%i", &option);

        switch (option) {
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
                printf("Ingrese la cadena de texto\n");
                char chains[100];
                fflush(stdin);
                fgets(chains, 100, stdin);
                deleteSpaces(chains);
                getchar();
                break;
            case 4:
                printf("case 4\n");
                break;
            case 5:
                printf("case 5\n");
                break;
            case 6:
                printf("Ingrese el dia en numero\n");
                int day;
                fflush(stdin);
                scanf("%d", &day);

                printf("Ingrese el mes en numero \n");
                int mount;
                scanf("%d", &mount);
                fflush(stdin);

                printf("Ingrese el anio en numero \n");
                int year;
                scanf("%d", &year);
                fflush(stdin);
                printf("la fecha ingresada es: %d / %d / %d \n ", day, mount, year);
                date(day, mount, year);
                getchar();
                break;
            case 7:
                printf("case 7\n");
                break;
            case 8:
                printf("case 8\n");
                break;
            case 9:
                printf("Ingrese un numero impar: \n");
                break;
        }
    } while (option != 0);
}

