#include <stdio.h>
#include <math.h>

double f(double x)
{
return x*x*x*x-3*x*x-3;  //change equation for each problem
}

double g(double x)
{
//return pow(3*x*x+3,.25);
  return (2 - pow(x, 2));
}

int main()
{
    double p, p0, Tol;
    int i=1;
    int No;

    printf("Enter approximate p: ");
    scanf ("%lf", &p0);

    printf("Desired Tolerance: ");
    scanf ("%lf", &Tol);

    printf("Maximum Iterations: ");
    scanf ("%d", &No);


    do
    {
        p = g(p0);

        if((fabs(p-p0)) > Tol)
        {
            printf("%lf", &p);
            break;
        }

        printf("Iteration %d: Current value = %lf\n", i, p);

        i++;  //i=i+1
        p0=p;

        if (i>No)
        {
        printf("Method Failed after %d", No);
        printf(" iterations");
        }

    }while (i<=No);

}
