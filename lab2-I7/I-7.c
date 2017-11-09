#include<stdio.h>


int main ()
{
    int i,n,ok=0;

    scanf ("%d" ,&n);

    for (i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
                ok=1;
                break;
        }

    }

    if(ok==1)
        printf("%d is not a prime number", n);
    else
    {
        printf("%d is a prime number and its factors are %d %d", n, 1, n );
    }


}

