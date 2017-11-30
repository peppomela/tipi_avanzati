#include <stdio.h>
int main()
{
    int vet[3], value, som=0, med=0,i;
    printf("\nInserisci tre numeri interi\n");
    //for per l'inserimento dei tre numeri
    for(i=0;i<3;i++)
    {
        printf("--> ");
        scanf("%d",&vet[i]);
    }
    //for per la stampa di due numeri 
    printf("\nStampo i valori");
    for(i=0;i<3;i++)
    {
        printf("\nvet[%d] = %d",i,vet[i]);
        som=som+vet[i];
    }
    med=som/3;
    printf("\nSomma = %d",som);
    printf("\nMedia = %d\n",med);
    
    return 0;
    
}
