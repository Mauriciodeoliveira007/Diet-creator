#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
//STRUCT=============================================================================================================
typedef struct c
{
    char nome[255];
    float peso;
    int calorias;
} Dieta;
//PROTOTIPAÇÃO========================================================================================================

//====================================================================================================================

int main()
{
    
    return 0;
}

//=====================================================================================================================
// - Crie uma função que obtém os dados de uma estrutura dieta pelo teclado e a retorna.

//Funções de Input=====================================================================================================
int lerInteiro() {
    char str[255] = 0;
    int transf = 0;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &transf);

    return transf;
}

float lerFloat() {
    char str[255] = 0;
    int transf = 0;
    fgets(str, sizeof(str), stdin);
    sscanf(str, "%d", &transf);

    return transf;
}

void lerString(char palavra[], int tam) {
    fgets(palavra, tam, stdin);
    palavra[strlen(palavra) - 1] = '\0';
}