#include<stdio.h>

int main()
{
    long long p=1;
    int a, i, n, nr=0;

    scanf("%d", &n);


    for(i=1;i<=n;i++)
    {
        scanf("%d", &a);
        p=p*a;
    }

    while(p%10==0)
    {
        nr++;
        p=p/10;

    }

    printf("%d", nr);

}

