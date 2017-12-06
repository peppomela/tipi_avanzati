#include <stdio.h>
int main()
{
    int cast;
    double value;
        
    printf("\nInserisci il tuo valore double :\n");
    printf("--> ");
    
    scanf("%lf", &value);
    
    printf("Il valore del tuo double e' = %f\n",value);
    
    cast=(int)value;
    
    printf("Il valore dopo il cast e' = %d\n",cast);
    return 0;
}
