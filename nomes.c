#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    char nome[5][50];

for ( i = 0; i < 5; i++)
{
printf("Digite o nome %d %s", i+1,  nome[i]);
scanf("%s", &nome[i]);
}

for ( i = 0; i < 5; i++)
{
    printf("O nome %d %s \n", i+1, nome[i]);
}



return 0;
}
