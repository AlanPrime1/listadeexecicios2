#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    float nota[4];
    float maiornumero, menornumero=999999999999999999999;

    for (i = 0; i < 4; i++)
    {
        printf("Digite a nota");
        scanf("%f", &nota[i]);


        if  (nota[i] > maiornumero)
        {
            maiornumero=nota[i];
        }

        if (nota[i]< menornumero)
        {
            menornumero=nota[i];
        }
        

    }

    printf("maior numero %2.f \n", maiornumero);
    printf("menor numero %2.f \n", menornumero);

      

    
    
     




return 0;
}
