#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char a[50];
    float nota, soma, media;
    int contador = 0;


    do
    {
        contador++;

        printf("Qual a sua nota:");
        scanf("%f", &nota);
        printf("quer continuar:");
        scanf("%s", &a);

        soma+=nota;
       

    } while (strcmp(a, "sim") == 0);

     media=soma/contador;

    printf("%d\n",contador);
    printf("%.1f",media);
  


    return 0;
}
