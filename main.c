#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "ctype.h"
#define nums 100

void main_menu();


void Factoresprimos(int);
void deleteSpaces(char chain[100]);
void numeroMagico(int numero);
void date(int day, int mount, int year);
int ProductoPunto(int, int);
void magicSquares(int);
int multiplicationMatr();
int egolatras(int n);

int main()
{
    main_menu();
    return 0;
}
void numeroMagico(int numero){
    int va1;
    int va2;
    int length = floor(log10(numero)) + 1;
    char chain[length + 1];

    sprintf(chain,"%d",numero);

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {

            if (chain[i] < chain[j]) {
                int temp = chain[i];
                chain[i] = chain[j];
                chain[j] = temp;
            }
        }
    }

    va1 = atoi(chain);

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {

            if (chain[i] > chain[j]) {
                int temp = chain[i];
                chain[i] = chain[j];
                chain[j] = temp;
            }
        }
    }

    va2 = atoi(chain);

    if((va1-va2) == numero){
        printf("%d - %d = %d ----> %d corresponde a un numero  magico\n",va1,va2,(va1-va2),numero);
    }else{
        printf("%d - %d = %d ----> %d no corresponde a un numero magico\n",va1,va2,(va1-va2),numero);
    }

}

void Factoresprimos(int number)
{
    int i;
    int exponent;
    int num_factors = 0;
    int factors[1000];
    int exp[1000];

    for (i = 2; i <= sqrt(number); i++)
    {
        exponent = 0;
        while (number % i == 0)
        {
            exponent++;
            number /= i;
        }
        if (exponent > 0)
        {
            factors[num_factors] = i;
            exp[num_factors] = exponent;
            num_factors++;
        }
    }

    if (number > 2)
    {
        factors[num_factors] = number;
        exp[num_factors] = 1;
        num_factors++;
    }

    for (i = 0; i < num_factors - 1; i++)
    {
        for (int j = i + 1; j < num_factors; j++)
        {
            if (factors[i] < factors[j])
            {
                int temp = factors[i];
                factors[i] = factors[j];
                factors[j] = temp;
                temp = exp[i];
                exp[i] = exp[j];
                exp[j] = temp;
            }
        }
    }

    for (i = 0; i < num_factors; i++)
    {
        printf("%d^%d \n", factors[i], exp[i]);
    }
}

int multiplicationMatr(int m1f, int m1c, int m2f, int m2c)
{

    int a[20][20], b[20][20], c[20][20], seg, hel;

    if (m1f == m2c)
    {

        for (int i = 0; i < m1f; ++i)
        {
            for (int j = 0; j < m1c; ++j)
            {
                a[i][j] = rand() % 9 + 1;
            }
        }

        for (int i = 0; i < m2f; ++i)
        {
            for (int j = 0; j < m2c; ++j)
            {
                b[i][j] = rand() % 9 + 1;
            }
        }

        for (int i = 0; i < m1f; ++i)
        {
            for (int j = 0; j < m1c; ++j)
            {
                for (seg = 0, hel = 0; seg < m1c; ++seg)
                {
                    hel = hel + a[i][seg] * b[seg][j];
                }
                c[i][j] = hel;
            }
        }

        printf("\nMatriz 1ª");
        for (int i = 0; i < m1f; ++i)
        {
            printf("\n");
            for (int j = 0; j < m1c; ++j)
            {
                printf("\t%d", a[i][j]);
            }
        }

        printf("\n Matriz 2ª");
        for (int i = 0; i < m2f; ++i)
        {
            printf("\n");
            for (int j = 0; j < m2c; ++j)
            {
                printf("\t%d", b[i][j]);
            }
        }

        printf("\n Multiplicacion de matriz\n");
        for (int i = 0; i < m1f; ++i)
        {
            printf("\n");
            for (int j = 0; j < m2c; ++j)
            {
                printf("\t%d ", c[i][j]);
            }
        }
    }
    else
    {
        printf("Null\n");
        return (int)NULL;
    }

    return (int)NULL;
}

void deleteSpaces(char chain[100])
{
    char chainNoSpaces[100];
    int i = 0;
    int j = 0;
    while (chain[i] != '\0')
    {
        if (chain[i] != ' ')
        {
            chainNoSpaces[j] = chain[i];
            j++;
        }
        i++;
    }
    printf("la cadena sin espacios es: %s \n", chainNoSpaces);
}

// metodo para dar formato a la fecha
void date(int day, int mount, int year)
{
    char messaje[27] = "Dia no valido para este mes";
    if (day >= 1 && day <= 31 && mount <= 12 && year >= 1000 && year <= 5000)
    {
        switch (mount)
        {
        case 1:
            printf("%d de Enero de %d \n", day, year);
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 && day == 29)
            {
                printf("Anio bisiesto\n");
                printf("%d de Febrero de %d \n", day, year);
                break;
            }
            else if (day <= 28)
            {
                printf("%d de Febrero de %d \n", day, year);
            }
            else if (day >= 29)
            {
                printf("%s o anio\n", messaje);
            }
            break;
        case 3:
            printf("%d de Marzo de %d \n", day, year);
            break;
        case 4:
            if (day <= 30)
            {
                printf("%d de Abril de %d \n", day, year);
            }
            else
            {
                printf("%s\n", messaje);
            }
            break;
        case 5:
            printf("%d de Mayo de %d \n", day, year);
            break;
        case 6:
            if (day <= 30)
            {
                printf("%d de Junio de %d \n", day, year);
            }
            else
            {
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
            if (day <= 30)
            {
                printf("%d de Septiembre de %d \n", day, year);
            }
            else
            {
                printf("%s\n", messaje);
            }
            break;
        case 10:
            printf("%d de Octubre de %d \n", day, year);
            break;
        case 11:
            if (day <= 30)
            {
                printf("%d de Noviembre de %d \n", day, year);
            }
            else
            {
                printf("%s\n", messaje);
            }

            break;
        case 12:
            printf("%d de Diciembre de %d \n", day, year);
            break;
        }
    }
    else
    {
        printf("Fecha invalida\n");
    }
}

void magicSquares(int number)
{
    int a[nums][nums];
    if (number % 2 == 0)
    {
        return;
    }
    else
    {
        for (int i = 1; i <= number; i++)
        {
            for (int j = 1; j <= number; j++)
            {
                a[i][j] = 0;
            }
        }
    }

    int i = 1;
    int j = (1 + number) / 2;
    a[i][j] = 1;
    for (int value = 2; value <= number * number; value++)
    {
        i = i - 1;
        j = j + 1;
        if (i < 1 && j > number)
        {
            i = i + 2;
            j = j - 1;
        }
        else
        {
            if (i < 1)
            {
                i = number;
            }
            if (j > number)
            {
                j = 1;
            }
        }
        if (a[i][j] == 0)
        {
            a[i][j] = value;
        }
        else
        {
            i += 2;
            j -= 1;
            a[i][j] = value;
        }
    }

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}

void main_menu()
{
    int option;
    char *menu = "\n--------------Menu principal---------------\n"
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

    do
    {
        printf("%s", menu);
        printf("Ingrese una opcion: ");
        scanf("%i", &option);

        switch (option)
        {
        case 1:

            break;
        case 2:
            printf("Ingrese el numero para sacar los factores \n");
            int number;
            scanf("%d", &number);
            fflush(stdin);
            Factoresprimos(number);
            fflush(stdin);
            getchar();
            break;
        case 3:
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
            printf("Ingrese el numero  \n");
                int magic;
                scanf("%d", &magic);
                fflush(stdin);
                numeroMagico(magic);
                fflush(stdin);
                getchar();
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
            printf("Multiplicación de Matrices \n");
            int m1f, m1c, m2f, m2c;
            printf("\n Agregue el numero de filas de la matriz 1 \n");
            scanf("%d", &m1f);

            printf("Agregue el numero de columnas de la matriz 1 \n");
            scanf("%d", &m1c);

            printf("Agregue el numero de filas de la matriz 2 \n");
            scanf("%d", &m2f);

            printf("Agregue el numero de columnas de la matriz 2 \n");
            scanf("%d", &m2c);
            fflush(stdin);
            multiplicationMatr(m1f, m1c, m2f, m2c);
            fflush(stdin);
            getchar();
            break;
        case 9:
            printf("Ingrese un numero impar: \n");
            int n;
            scanf("%d", &n);
            fflush(stdin);
            magicSquares(n);
            getchar();
            break;
        default:
            printf("Opcion no valida \n");
        }
    } while (option != 0);
}
