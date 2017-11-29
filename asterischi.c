#include <time.h>
#include <stdio.h>
int main()
{    
    struct timespec intervallo;
    intervallo.tv_sec = 0;
    intervallo.tv_nsec = 700*1000*1000;
    
    char asterisco='*';
    
    printf("%c",asterisco);
    nanosleep(&intervallo, NULL);

    printf("%c",asterisco);
    nanosleep(&intervallo, NULL);
    
    printf("%c",asterisco);
    nanosleep(&intervallo, NULL);
    
    return 0;
}
