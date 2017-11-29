#include <stdio.h>
int main()
{
    float value;
    float *val;
    
    val=&value;
    printf("\nL'indirizzo della variabile e' = %p\n",val);
    return 0;
}
