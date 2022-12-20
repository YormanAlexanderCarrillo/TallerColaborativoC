#include <stdio.h>
#include <string.h>
#include "ctype.h"
void main_menu();

char* roman(char* );
char* Factoresprimos(int);
void deleteSpaces(char chain[100]);
int numeroMagico(int);
int ProductoPunto(int , int);
char egolatras(int);
int numeroMagico(int);
void Fecha(char *);
int ProductoPunto(int, int);
void magicSquares(int);


int main() {
    //main_menu();
    //char* response = Factoresprimos(10,"");
    //printf("%s", response);
    Factoresprimos(100);
    return 0;
}


char *roman(char *romanChain) {
    printf("procesar %s \n", &romanChain);
    getchar();
    return romanChain;
}

char* Factoresprimos(int number){
    int i_factores=0;
    int factores[1000];
    int i=2;
    while(i<=number)
    {
        if((number%i)==0)
        {
            factores[i_factores]=i;
            number=number/i;
            i_factores++;
            continue;
        }
        i++;
    }

/* Rutina para imprimir */
    i=0;
    while(i<i_factores)
    {
        printf(" %d ", factores[i]);
        i++;

    }
    return factores;
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


void Fecha(char *date) {


}


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
                printf("Ingrese un numero impar: \n");
                break;
        }
    } while (option != 0);

}

