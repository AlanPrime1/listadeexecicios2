#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, contador;
    float nota[3];
    float soma, media;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a nota");
        scanf("%f", &nota[i]);

        contador++;

        soma+=nota[i];

    }

    media=soma/i;

    printf("A media e  %2.f \n", media);

    for ( i = 0; i < 3; i++)
    {
        printf("A nota %d e %2.f \n", i+1, nota[i]);
    }
    

      printf("O contador e %d \n", contador);
      printf("A soma das notas e %2.f \n", soma);
      printf("A media e %2.f \n", media);

 
      

    
    
     




return 0;
}
