#include <stdio.h>
#include <math.h>

#define E 0.0001

double G(double x)
{
    return (2 - pow(x, 2));
    //F(x) = x*x + x - 2, So, G(x) or x = 2 - x * x
    //roots are -2, 1
}

int main()
{
    double x1, x0, root;
    int iter = 0;

    printf("Enter initial assumption : ");//can be 0 , -1
    scanf("%lf", &x0);

    printf("\nIter.\tx1\n");

    while(1)
    {
        iter++;
        x1 = G(x0);

        printf("\n%d\t%lf", iter, x1);

        if((fabs(x1 - x0)/x1) < E)
        {
            root = x1;
            break;
        }
        else
            x0 = x1;
    }

    printf("\n\nThe Approximate root after %d iterations is : %lf", iter, root);

    return 0;
}

