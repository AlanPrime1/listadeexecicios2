#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

int i = 0;
int  numero[5];
int numeropar=0, numeroimpar=0 ;




for ( i = 0; i < 5; i++)
{
    printf("Digite um numero:");
    scanf("%d", &numero[i]);


if (numero[i] % 2 == 0)
{
    numeropar++;

}else

numeroimpar++;


}

for ( i = 0; i < 5; i++)
{
    printf("%d \n",numero[i] );
    
}
printf("%d  numero par \n",numeropar);
printf("%d  numero impar \n", numeroimpar);


    return 0;
}
