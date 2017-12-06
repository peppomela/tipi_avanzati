#include <stdio.h>
int main()
{
    int vet[3], value, som=0,i;
	double med=0;
    printf("\nInserisci tre numeri interi\n");
    //for per l'inserimento dei tre numeri
    for(i=0;i<3;i++)
    {
        printf("--> ");
        scanf("%d",&vet[i]);
    }
    //for per la stampa di tre numeri 
    printf("\nStampo i valori");
    for(i=0;i<3;i++)
    {
        printf("\nvet[%d] = %d",i,vet[i]);
        som=som+vet[i];
    }
    med=som/3.0;
    printf("\nSomma = %d",som);
    printf("\nMedia = %4.2f\n",med);
    
    return 0;
    
}
