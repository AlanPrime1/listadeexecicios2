#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, contador;
    float nota[4];
    float soma, media;

    for (i = 0; i < 4; i++)
    {
        printf("Digite a nota");
        scanf("%f", &nota[i]);

        contador++;

        soma+=nota[i];

    }

    media=soma/i;

    if (media >=7)
    {
        printf("APROVADO");
    }

    if ((media >=5) & (media <7))

    {
        printf("RECUPERACAO");
    
    }
    if   (media<5)
{
printf("REPROVADO");

}
    

      

    
    
     




return 0;
}
