//Crie em C o algoritmo de ordenação Seleciont Sort para strings.

#include <stdio.h>
#include <string.h>

//variavel e nomes
char nome[5][16] = {"algusto", "jeronimo", "bike", "carro"};

//função de ordenação
void ordenador(){
    int i, j, resultado, num;
    char aux[15];
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            resultado = strcmp(nome[i], nome[j]);
            if (resultado < 0)
            {
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }
}

//comando principal
int main()
{
    int p;
    printf("----------nomes desorganizados----------\n");
    printf("nomes: %s, %s, %s, %s, %s\n", nome[0], nome[1], nome[2], nome[3], nome[4]);

    ordenador();    //chamando função

    printf("----------nomes ordenados----------\n");    
    printf("nomes: %s, %s, %s, %s, %s", nome[0], nome[1], nome[2], nome[3], nome[4]);

    return 0;
}
