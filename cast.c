#include <stdio.h>
int main()
{
    float value;
    int cast;
    
    printf("\nInserisci il tuo valore float :\n");
    printf("--> ");
    scanf("%f",&value);
    printf("Il valore del tuo float e' = %f\n",value);
    cast=(int)value;
    printf("Il valore dopo il cast e' = %d\n",cast);
    return 0;
}
