#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,contpar=0, contimpar=0;
    int numero[4];


    for (i = 0; i < 4; i++)
    {
        printf("Digite o numero %d\n", i+1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2==0)
        {
            contpar=contpar+1;
        }
        else
        {contimpar=contimpar+1;
        }
        

    }

printf("quantidade par %d \n", contpar);
printf("quantidade impar %d \n", contimpar);


for ( i = 3; i >= 0; i--)
{
    printf("numero %d e :%d \n", i+1, numero[i]);
}






return 0;
}
