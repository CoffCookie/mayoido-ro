#include <stdio.h>
#include <stdlib.h>

void fibonacci(unsigned long n, unsigned long *p)
{
    unsigned long i;
    unsigned long x=1,y=1,z=0;
    
    for(i=1; i<=n; i++)
    {
        if(i == 1)
        {
            x=y+x;
        }
        else
        {
            z=x;
            x=y+x;
            y=z;
        }
        if((i%2) != 0)
        {
            *p += x;
        }
    }
}

int main(void)
{
    unsigned long n, mov=0;
    unsigned long *p = &mov;
    char str[10],*ends;
    
    fgets(str, sizeof(str), stdin);
    n = strtoul(str,&ends,10);
    
    if(n == 0)
    {
        *p=0;
        printf("%10lu",*p);
        return 0;
    }
    
    fibonacci(n,&mov);
    printf("%10lu",*p);
    return 0;
}