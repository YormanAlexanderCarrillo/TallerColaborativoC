#include <stdio.h>
#include <string.h>
#include "ctype.h"
void main_menu();

char* roman(char* );
char* Factoresprimos(int,char[]);
void deleteSpaces(char chain[100]);
int numeroMagico(int);
int ProductoPunto(int , int);
char egolatras(int);
int numeroMagico(int);
void Fecha(char *);
int ProductoPunto(int, int);
void magicSquares(int);


int main() {
    main_menu();
    printf("ghcghchg");
    char* response = Factoresprimos(10,"");
    printf("%s", response);
    return 0;
}


char *roman(char *romanChain) {
    printf("procesar %s \n", &romanChain);
    getchar();
    return romanChain;
}

char* Factoresprimos(int number, char* value){
    if(number%2 == 0){
        printf("fo");
        value = strcat(value, " 2");
        printf(value);
        //value = ("%d,%d",value,"2");
        return Factoresprimos(number/2,value);
    }
    if(number%3 == 0){
        value = strcat(value, " 3");
        //value = ("%d,%d",value,"3");
        return Factoresprimos(number/3,value);
    }
    if(number%5 == 0){
        value = strcat(value, " 5");
        //value = ("%d,%d",value,"5");
        return Factoresprimos(number/5,value);
    }
    if(number%7 == 0){
        value = strcat(value, " 7");
        //value = ("%d,%d",value,"7");
        return Factoresprimos(number/7,value);
    }
    //if(number != 1){
      //  value = strcat(value, number);
        //value = ("%d,%d",value,number);
        //return Factoresprimos(number/number,value);
    //}
    return value;
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

