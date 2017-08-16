#include <stdio.h>
#include <math.h>

#define E 0.0000 //may change

double F(double x)
{
   // return (pow(x, 2)- 3*(x) + 2);//function may change
   float num;

     return x*x -3*x+2;
}

double Fd(double x)
{
    //return (2*x-3);//may change according to given function
    return 2*x - 3;
}

int main()
{
    double x0, x1, f0, fd0, root;
    int iter = 0;

    printf("Enter the first approximation of the root : ");
    scanf("%lf", &x0);//must use %lf

    if(F(x0)== 0)
    {
        root = x0;
        printf("\nThe root is : %0.4f", root);
        return 0;
    }

    printf("\n==================================================");
    printf("\nIter.\tx0\tx1\tf(x0)\tf'(x0)\n");
    printf("\==================================================\n");

    while(1)
    {
        iter++;
        f0 = F(x0);
        fd0 = Fd(x0);

        x1 = x0 - (f0/fd0);

        printf("\n%d\t%0.4f\t%0.4f\t%0.4f\t%0.4f", iter, x0, x1, f0, fd0);

        if(fabs((x1 - x0)/x1) <= E)
        {
            root = x1;
            break;
        }
        else
        {
            x0 = x1;
        }
    }

        printf("\n\n** The appoximate root after %d iterations is : %0.4f\n", iter, root);
        return 0;
}
