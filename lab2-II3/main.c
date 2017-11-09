#include <stdio.h>
#include<math.h>

int main()
{
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float d;

    printf("Enter the coeficients a, b and c:");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    d=b*b-4*a*c;

    if(d>0)
      {
         x1=(-b+sqrt(d))/(2*a);
         x2=(-b-sqrt(d))/(2*a);

         printf("The roots of the equation are %f and %f", x1, x2 );
      }
      else
        if(d==0)
      {
           x1=(-b/(2*a));

           printf("The root of the equation is %f ", x1 );

      }
       else

           printf("the roots of the ecuation are complex");

    return 0;
}
